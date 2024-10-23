// include/LuxuryCar.h
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

public:
    LuxuryCar();
    LuxuryCar(int id, std::string make, std::string model, int year, double rentalPrice, bool luxuryPackage);
    ~LuxuryCar();

    bool getHasSunroof() const;
    void setHasSunroof(bool hasSunroof);
    bool getLuxuryPackage() const;
    void setLuxuryPackage(bool luxuryPackage);
    void activateLuxuryPackage();
    void getDetails() const override;
};
#endif