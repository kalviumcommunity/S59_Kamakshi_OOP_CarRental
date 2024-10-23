#include <iostream>
#include <vector>
#include "ElectricCar.h"
#include "LuxuryCar.h"

int main() {
    // Create a vector of rentable items
    std::vector<IRental*> rentals;
    
    // Create different types of cars
    ElectricCar* electricCar = new ElectricCar(4, "Tesla", "Model 3", 2021, 60.0, 400);
    LuxuryCar* luxuryCar = new LuxuryCar(5, "BMW", "7 Series", 2022, 100.0, true);
    
    // Add them to the rentals vector
    rentals.push_back(electricCar);
    rentals.push_back(luxuryCar);
    
    // Demonstrate rental cost calculation for different types
    for (const auto& rental : rentals) {
        std::cout << "Rental cost for 7 days: $" << rental->calculateRentalCost(7) << std::endl;
    }
    
    // Demonstrate rental operations
    electricCar->rent(7);
    luxuryCar->rent(3);
    
    // Show details (using dynamic_cast since getDetails is not part of IRental)
    if (auto* eCar = dynamic_cast<ElectricCar*>(rentals[0])) {
        eCar->getDetails();
    }
    if (auto* lCar = dynamic_cast<LuxuryCar*>(rentals[1])) {
        lCar->getDetails();
    }
    
    // Clean up
    for (auto* rental : rentals) {
        delete rental;
    }
    
    return 0;
}