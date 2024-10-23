#include <iostream>
#include <vector>
#include "ElectricCar.h"
#include "LuxuryCar.h"

int main() {
    
    vector<IRental*> rentals;
    
    ElectricCar* electricCar = new ElectricCar(4, "Tesla", "Model 3", 2021, 60.0, 400);
    LuxuryCar* luxuryCar = new LuxuryCar(5, "BMW", "7 Series", 2022, 100.0, true);
    
    rentals.push_back(electricCar);
    rentals.push_back(luxuryCar);
    
    // demonstrate LSP 
    for (auto* rental : rentals) {
        cout << "Rental cost for 7 days: $" << rental->calculateRentalCost(7) << endl;
        rental->rent(7);
        rental->returnItem();
    }
    
    if (auto* eCar = dynamic_cast<ElectricCar*>(rentals[0])) {
        eCar->chargeBattery();
        eCar->getDetails();
    }
    
    if (auto* lCar = dynamic_cast<LuxuryCar*>(rentals[1])) {
        lCar->activateLuxuryPackage();
        lCar->getDetails();
    }
    
    for (auto* rental : rentals) {
        delete rental;
    }
    
    return 0;
}