#include "../include/LuxuryCar.h"
#include <iostream>

LuxuryCar::LuxuryCar() : Car(), hasSunroof(false), luxuryPackage(false) {
    std::cout << "LuxuryCar Default constructor called." << std::endl;
}

LuxuryCar::LuxuryCar(int id, std::string make, std::string model, int year, double rentalPrice, bool luxuryPackage)
    : Car(id, make, model, year, rentalPrice), hasSunroof(true), luxuryPackage(luxuryPackage) {
    std::cout << "LuxuryCar Parameterized constructor called." << std::endl;
}

LuxuryCar::~LuxuryCar() {
    std::cout << "LuxuryCar Destructor called for Car ID: " << getId() << std::endl;
}

bool LuxuryCar::getHasSunroof() const { return hasSunroof; }
void LuxuryCar::setHasSunroof(bool hasSunroof) { this->hasSunroof = hasSunroof; }

bool LuxuryCar::getLuxuryPackage() const { return luxuryPackage; }
void LuxuryCar::setLuxuryPackage(bool luxuryPackage) { this->luxuryPackage = luxuryPackage; }

void LuxuryCar::activateLuxuryPackage() {
    luxuryPackage = true;
    std::cout << "Luxury package activated!" << std::endl;
}

void LuxuryCar::getDetails() const {
    Car::getDetails(); 
    std::cout << "Sunroof: " << (hasSunroof ? "Yes" : "No") << "\n"
              << "Luxury Package: " << (luxuryPackage ? "Activated" : "Not Activated") << std::endl;
}