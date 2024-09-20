#include "Car.cpp"
#include "Customer.cpp"
#include "ElectricCar.cpp"
#include "LuxuryCar.cpp"
#include <iostream>

using namespace std;

int main() {
    // dynamically allocating memory for an array of car objects
    Car* cars = new Car[3]{ 
        Car(1, "Toyota", "Camry", 2020, 50.0),
        Car(2, "Honda", "Civic", 2019, 45.0),
        Car(3, "Ford", "Fusion", 2018, 40.0)
    };

    // dynamically allocating memory for customer objects
    Customer* customer1 = new Customer(1, "Alice", "alice@example.com");
    Customer* customer2 = new Customer(2, "Bob", "bob@example.com");

    // to demonstrate usage of accessors and mutators
    customer1->setName("Alice Johnson");
    customer2->setContact("bob123@example.com");
    cars[0].setRentalPrice(55.0);
    cars[1].setAvailability(false);

    // to display the details of the car
    for (int i = 0; i < 3; ++i) {
        cout << "Details of Car " << i + 1 << ":" << endl;
        cars[i].getDetails();
        cout << endl;
    }


    cout << "Total number of cars: " << Car::getCarCount() << endl;

    cout << "Details of Customer 1:" << endl;
    customer1->getDetails();
    cout << endl;

    cout << "Details of Customer 2:" << endl;
    customer2->getDetails();
    cout << endl;


    cout << "Total number of customers: " << Customer::getCustomerCount() << endl;

      ElectricCar* electricCar = new ElectricCar(4, "Tesla", "Model 3", 2021, 60.0, 400); // Assume 400 km range
    cout << "Details of Electric Car:" << endl;
    electricCar->getDetails();
    electricCar->chargeBattery(); // ElectricCar specific method
    cout << "Electric Car Range after charge: " << electricCar->getRange() << " km" << endl;
    cout << endl;

    // Demonstrating LuxuryCar
    LuxuryCar* luxuryCar = new LuxuryCar(5, "BMW", "7 Series", 2022, 100.0, true); // Assume luxuryPackage = true
    cout << "Details of Luxury Car:" << endl;
    luxuryCar->getDetails();
    if (luxuryCar->getHasSunroof()) {
        cout << "This luxury car has a sunroof!" << endl;
    }
    cout << endl;


    // deallocating memory
    delete[] cars;          
    delete customer1;       
    delete customer2;
    delete electricCar; 
    delete luxuryCar;  

    return 0;
}
