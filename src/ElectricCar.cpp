
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

    bool isValidRental(int days) const override {
        return Car::isValidRental(days) && batteryLife >= 20;
    }

    void onRent(int days) override {
        Car::onRent(days);
        cout << "Electric car battery at " << batteryLife << "%. ";
        if (batteryLife < 80) {
            cout << "Recommended to charge before rental." << endl;
        }
    }

public:
    ElectricCar();
    ElectricCar(int id, string make, string model, int year, double rentalPrice, int range);
    ~ElectricCar() override;

    int getBatteryLife() const;
    void setBatteryLife(int batteryLife);
    int getRange() const;
    void setRange(int range);
    void chargeBattery();
    void getDetails() const override;
};
#endif