#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "Car.h"

class ElectricCar : public Car {
private:
    int batteryLife;
    int range;  

public:
    ElectricCar();
    ElectricCar(int id, string make, string model, int year, double rentalPrice, int range);
    ~ElectricCar();

    int getBatteryLife() const;
    void setBatteryLife(int batteryLife);

    int getRange() const;
    void setRange(int range);

    void chargeBattery();  
    void getDetails() const override;
};

#endif