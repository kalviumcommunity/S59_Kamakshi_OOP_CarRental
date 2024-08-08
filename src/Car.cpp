#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(int id, string make, string model, int year, double rentalPrice)
    : id(id), make(make), model(model), year(year), rentalPrice(rentalPrice), isAvailable(true) {}

void Car::getDetails() const {
    cout << "ID: " << id << "\nMake: " << make << "\nModel: " << model
         << "\nYear: " << year << "\nRental Price: " << rentalPrice
         << "\nAvailable: " << (isAvailable ? "Yes" : "No") << endl;
}

void Car::rent() {
    if (isAvailable) {
        isAvailable = false;
        cout << "Car rented successfully." << endl;
    } else {
        cout << "Car is not available." << endl;
    }
}

void Car::returnCar() {
    isAvailable = true;
    cout << "Car returned successfully." << endl;
}

bool Car::checkAvailability() const {
    return isAvailable;
}
