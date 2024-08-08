#include <iostream>
#include "Car.h"
#include "Customer.h"

using namespace std;

int main() {

    Car car1(1, "Toyota", "Camry", 2020, 50.0);
    Car car2(2, "Honda", "Civic", 2019, 45.0);

    Customer customer1(1, "Alice", "alice@example.com");
    Customer customer2(2, "Bob", "bob@example.com");

    cout << "Details of Car 1:" << endl;
    car1.getDetails();
    cout << endl;

    cout << "Details of Car 2:" << endl;
    car2.getDetails();
    cout << endl;

    cout << "Details of Customer 1:" << endl;
    customer1.getDetails();
    cout << endl;

    cout << "Details of Customer 2:" << endl;
    customer2.getDetails();
    cout << endl;

    return 0;
}
