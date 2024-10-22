#include <iostream>
#include "Car.cpp"
#include "Customer.cpp"
#include "ElectricCar.cpp"
#include "LuxuryCar.cpp"
using namespace std;

int maain() {
    // Create cars
    ElectricCar* electricCar = new ElectricCar(4, "Tesla", "Model 3", 2021, 60.0, 400);
    LuxuryCar* luxuryCar = new LuxuryCar(5, "BMW", "7 Series", 2022, 100.0, true);

    // Create customers
    Customer* customer1 = new Customer(1, "Alice", "alice@example.com");
    Customer* customer2 = new Customer(2, "Bob", "bob@example.com");

    // Display initial details
    cout << "Initial Car Details:" << endl;
    electricCar->getDetails();
    cout << endl;
    luxuryCar->getDetails();
    cout << endl;

    // Demonstrate rental operations using RentalManager
    RentalManager::rentCar(electricCar);
    RentalManager::rentCar(luxuryCar, 7);  // Rent for 7 days

    // Display details after rental
    cout << "\nCar Details After Rental:" << endl;
    electricCar->getDetails();
    cout << endl;
    luxuryCar->getDetails();
    cout << endl;

    // Return cars
    RentalManager::returnCar(electricCar);
    RentalManager::returnCar(luxuryCar);

    // Display final details
    cout << "\nCar Details After Return:" << endl;
    electricCar->getDetails();
    cout << endl;
    luxuryCar->getDetails();

    // Clean up
    delete electricCar;
    delete luxuryCar;
    delete customer1;
    delete customer2;

    return 0;
}