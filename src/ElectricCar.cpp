#include "../include/ElectricCar.h"
#include <iostream>
using namespace std;

ElectricCar::ElectricCar() : Car(), batteryLife(0), range(0) {
    cout << "ElectricCar Default constructor called." << endl;
}

ElectricCar::ElectricCar(int id, string make, string model, int year, double rentalPrice, int range)
    : Car(id, make, model, year, rentalPrice), batteryLife(100), range(range) {
    cout << "ElectricCar Parameterized constructor called." << endl;
}

ElectricCar::~ElectricCar() {
    cout << "ElectricCar Destructor called for Car ID: " << getId() << endl;
}

int ElectricCar::getBatteryLife() const { return batteryLife; }
void ElectricCar::setBatteryLife(int batteryLife) { this->batteryLife = batteryLife; }

int ElectricCar::getRange() const { return range; }
void ElectricCar::setRange(int range) { this->range = range; }

void ElectricCar::chargeBattery() {
    batteryLife = 100;
    cout << "Battery charged to 100%." << endl;
}

void ElectricCar::getDetails() const {
    Car::getDetails();
    cout << "Battery Life: " << batteryLife << "%\n"
         << "Range: " << range << " km" << endl;
}