
#ifndef LUXURYCAR_H
#define LUXURYCAR_H
#include "Car.h"

class LuxuryCar : public Car {
private:
    bool hasSunroof;
    bool luxuryPackage;

protected:
    double calculateBasePrice(int days) const override {
        double basePrice = Car::calculateBasePrice(days);
        return basePrice * (luxuryPackage ? 1.2 : 1.0);
    }

    bool isValidRental(int days) const override {
        return Car::isValidRental(days) && days >= 1; 
    }

    void onRent(int days) override {
        Car::onRent(days);
        if (luxuryPackage) {
            cout << "Luxury package features activated for your rental." << endl;
        }
    }

public:
    LuxuryCar();
    LuxuryCar(int id, string make, string model, int year, double rentalPrice, bool luxuryPackage);
    ~LuxuryCar() override;

    bool getHasSunroof() const;
    void setHasSunroof(bool hasSunroof);
    bool getLuxuryPackage() const;
    void setLuxuryPackage(bool luxuryPackage);
    void activateLuxuryPackage();
    void getDetails() const override;
};
#endif