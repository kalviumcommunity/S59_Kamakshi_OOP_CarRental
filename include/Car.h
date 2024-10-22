#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
using namespace std;

class Car {
private:
    int id;
    string make;
    string model;
    int year;
    double rentalPrice;
    bool isAvailable;
    static int carCount;

public:
    Car();
    Car(int id, string make, string model, int year, double rentalPrice);
    virtual ~Car();

    // Basic getters and setters
    int getId() const;
    string getMake() const;
    string getModel() const;
    int getYear() const;
    double getRentalPrice() const;
    bool isCarAvailable() const;

    void setMake(const string& newMake);
    void setModel(const string& newModel);
    void setYear(int newYear);
    void setRentalPrice(double newRentalPrice);
    void setAvailability(bool availability);

    virtual void getDetails() const = 0;
    static int getCarCount();
};

// rentalmanager class 
class RentalManager {
public:
    static bool rentCar(Car* car) {
        if (car->isCarAvailable()) {
            car->setAvailability(false);
            cout << "Car rented successfully." << endl;
            return true;
        }
        cout << "Car is not available." << endl;
        return false;
    }

    static bool rentCar(Car* car, int days) {
        if (car->isCarAvailable()) {
            car->setAvailability(false);
            cout << "Car rented for " << days << " days." << endl;
            return true;
        }
        cout << "Car is not available." << endl;
        return false;
    }

    static void returnCar(Car* car) {
        car->setAvailability(true);
        cout << "Car returned successfully." << endl;
    }

    static bool checkAvailability(const Car* car) {
        return car->isCarAvailable();
    }
};

#endif
