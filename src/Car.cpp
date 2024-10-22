#include "./../include/Car.h"
#include <iostream>
using namespace std;

int Car::carCount = 0; // to initialize static variable

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
bool Car::isCarAvailable() const { return isAvailable; }

// mutator methods
void Car::setMake(const string& newMake) { make = newMake; }
void Car::setModel(const string& newModel) { model = newModel; }
void Car::setYear(int newYear) { year = newYear; }
void Car::setRentalPrice(double newRentalPrice) { rentalPrice = newRentalPrice; }
void Car::setAvailability(bool availability) { isAvailable = availability; }

int Car::getCarCount() { return carCount; }