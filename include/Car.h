#ifndef CAR_H
#define CAR_H
#include "IRental.h"
#include <string>
using namespace std;

class Car : public IRental {
private:
    int id;
    string make;
    string model;
    int year;
    double rentalPrice;
    bool available;
    static int carCount;

protected:
    virtual double calculateBasePrice(int days) const {
        return days * rentalPrice;
    }

public:
    Car();
    Car(int id, string make, string model, int year, double rentalPrice);
    virtual ~Car();

    double calculateRentalCost(int days) const override {
        return calculateBasePrice(days);
    }
    
    bool isAvailable() const override {
        return available;
    }
    
    void rent(int days) override {
        if (available && isValidRental(days)) {
            available = false;
            onRent(days);
        } else {
            onRentalFailed();
        }
    }
    
    void returnItem() override {
        available = true;
        onReturn();
    }

    virtual bool isValidRental(int days) const {
        return days > 0;
    }
    
    virtual void onRent(int days) {
        cout << "Car rented for " << days << " days." << endl;
    }
    
    virtual void onReturn() {
        cout << "Car returned successfully." << endl;
    }
    
    virtual void onRentalFailed() {
        cout << "Car is not available." << endl;
    }

    int getId() const;
    string getMake() const;
    string getModel() const;
    int getYear() const;
    double getRentalPrice() const;
    void setMake(const string& newMake);
    void setModel(const string& newModel);
    void setYear(int newYear);
    void setRentalPrice(double newRentalPrice);
    
    virtual void getDetails() const = 0;
    static int getCarCount();
};

#endif