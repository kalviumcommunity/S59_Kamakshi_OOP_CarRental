#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H
#include "Car.h"

class ElectricCar : public Car {
private:
    int batteryLife;
    int range;

protected:
    double calculateBasePrice(int days) const override {
        double basePrice = Car::calculateBasePrice(days);
        return basePrice * 0.9;
    }

public:
    ElectricCar();
    ElectricCar(int id, std::string make, std::string model, int year, double rentalPrice, int range);
    ~ElectricCar();

    int getBatteryLife() const;
    void setBatteryLife(int batteryLife);
    int getRange() const;
    void setRange(int range);
    void chargeBattery();
    void getDetails() const override;
};
#endif