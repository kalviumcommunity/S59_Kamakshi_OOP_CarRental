#include <iostream>
#include "Car.h"
#include "Customer.h"

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

    // deallocating memory
    delete[] cars;          
    delete customer1;       
    delete customer2;

    return 0;
}
