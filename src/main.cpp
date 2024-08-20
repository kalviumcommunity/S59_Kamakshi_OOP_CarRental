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
    Customer* customer2 = new Customer(2, "BoB", "bob@example.com");

    // to display the details of the car
    for (int i = 0; i < 3; ++i) {
        cout << "Details of Car " << i + 1 << ":" << endl;
        cars[i].getDetails();
        cout << endl;
    }

    // to display the total numbers of cars 
      cout << "Total number of cars: " << Car::getCarCount() << endl;

    cout << "Details of Customer 1:" << endl;
    customer1->getDetails();
    cout << endl;

    cout << "Details of Customer 2:" << endl;
    customer2->getDetails();
    cout << endl;

    // to display the total number of customers
    cout << "Total number of customers: " << Customer::getCustomerCount() << endl;

    // deallocating memory
    delete[] cars;          
    delete customer1;       
    delete customer2;

    return 0;
}
