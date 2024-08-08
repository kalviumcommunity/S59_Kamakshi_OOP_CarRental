#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(int id, string make, string model, int year, double rentalPrice)
    : id(id), make(make), model(model), year(year), rentalPrice(rentalPrice), isAvailable(true) {}

void Car::getDetails() const {
    cout << "ID: " << this->id << "\nMake: " << this->make << "\nModel: " << this->model
         << "\nYear: " << this->year << "\nRental Price: " << this->rentalPrice
         << "\nAvailable: " << (this->isAvailable ? "Yes" : "No") << endl;
}

void Car::rent() {
    if (this->isAvailable) {
        this->isAvailable = false;
        cout << "Car rented successfully." << endl;
    } else {
        cout << "Car is not available." << endl;
    }
}

void Car::returnCar() {
    this->isAvailable = true;
    cout << "Car returned successfully." << endl;
}

bool Car::checkAvailability() const {
    return this->isAvailable;
}
