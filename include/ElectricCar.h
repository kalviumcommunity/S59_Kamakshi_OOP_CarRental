// include/ElectricCar.h
#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H
#include "Car.h"

class ElectricCar : public Car {
private:
    int batteryLife;
    int range;

protected:
    // Override the base price calculation to include electric car specific logic
    double calculateBasePrice(int days) const override {
        // Electric cars get a 10% discount for being eco-friendly
        double basePrice = Car::calculateBasePrice(days);
        return basePrice * 0.9;
    }

public:
    ElectricCar();
    ElectricCar(int id, std::string make, std::string model, int year, double rentalPrice, int range);
    ~ElectricCar();

    // Existing methods...
    int getBatteryLife() const;
    void setBatteryLife(int batteryLife);
    int getRange() const;
    void setRange(int range);
    void chargeBattery();
    void getDetails() const override;
};
#endif