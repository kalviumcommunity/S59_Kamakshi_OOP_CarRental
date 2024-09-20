#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {
private:
 // private: Only accessible within this class
    int id;
    string make;
    string model;
    int year;
    double rentalPrice;
    bool isAvailable;

    static int carCount; // static variable to count the number of cars

public:
   Car();  // default constructor
   Car(int id, string make, string model, int year, double rentalPrice); // parameterized constructor
   ~Car(); // destructor

    // Public accessor (getter) methods
    int getId() const;
    string getMake() const;
    string getModel() const;
    int getYear() const;
    double getRentalPrice() const;
    bool getAvailability() const;

    // public mutator (setter) methods
    void setMake(const string& newMake);
    void setModel(const string& newModel);
    void setYear(int newYear);
    void setRentalPrice(double newRentalPrice);
    void setAvailability(bool availability);

    // public: accessible outside the class
    virtual void getDetails() const;
    void rent();
    void rent(int days);
    void returnCar();
    bool checkAvailability() const;

    static int getCarCount();  // public static member function to access car count
};

#endif
