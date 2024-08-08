#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {
private:
    int id;
    string make;
    string model;
    int year;
    double rentalPrice;
    bool isAvailable;

public:
    Car(int id, string make, string model, int year, double rentalPrice);
    void getDetails() const;
    void rent();
    void returnCar();
    bool checkAvailability() const;
};

#endif
