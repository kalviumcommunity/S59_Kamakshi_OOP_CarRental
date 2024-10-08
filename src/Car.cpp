#include "./../include/Car.h"
#include <iostream>
using namespace std;

int Car::carCount = 0; // to initanize static variable

// default constructor
Car::Car() : id(0), make("Unknown"), model("Unknown"), year(0), rentalPrice(0.0), isAvailable(true) {
    carCount++;
    cout << "Default constructor called." << endl;
}

// parameterized constructor
Car::Car(int id, string make, string model, int year, double rentalPrice)
    : id(id), make(make), model(model), year(year), rentalPrice(rentalPrice), isAvailable(true) {
    carCount++;
}

// destructor
Car::~Car() {
    carCount--;
    cout << "Destructor called for Car ID: " << id << endl;
}


// accessor methods
int Car::getId() const { return id; }
string Car::getMake() const { return make; }
string Car::getModel() const { return model; }
int Car::getYear() const { return year; }
double Car::getRentalPrice() const { return rentalPrice; }
bool Car::getAvailability() const { return isAvailable; }

// mutator methods
void Car::setMake(const string& newMake) { make = newMake; }
void Car::setModel(const string& newModel) { model = newModel; }
void Car::setYear(int newYear) { year = newYear; }
void Car::setRentalPrice(double newRentalPrice) { rentalPrice = newRentalPrice; }
void Car::setAvailability(bool availability) { isAvailable = availability; }

void Car::getDetails() const {
    cout << "ID: " << this->id << "\nMake: " << this->make << "\nModel: " << this->model
         << "\nYear: " << this->year << "\nRental Price: " << this->rentalPrice
         << "\nAvailable: " << (this->isAvailable ? "Yes" : "No") << endl;

}//existing method
void Car::rent() {
    if (this->isAvailable) {
        this->isAvailable = false;
        cout << "Car rented successfully." << endl;
    } else {
        cout << "Car is not available." << endl;
    }
}

//overloaded version with rental duration 
void Car::rent(int days) {
    if (this->isAvailable) {
        this->isAvailable = false;
        cout << "Car rented for " << days << " days." << endl;
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

int Car::getCarCount() {
    return carCount; // to return the current car count
}