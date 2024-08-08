#include <iostream>
#include "Car.h"
#include "Customer.h"

using namespace std;

int main() {
    // to create an array of Car objects
    Car cars[] = {
        Car(1, "Toyota", "Camry", 2020, 50.0),
        Car(2, "Honda", "Civic", 2019, 45.0),
        Car(3, "Ford", "Fusion", 2018, 40.0)
    };

    Customer customer1(1, "Alice", "alice@example.com");
    Customer customer2(2, "Bob", "bob@example.com");

    // to display the details of the car
    for (int i = 0; i < 3; ++i) {
        cout << "Details of Car " << i + 1 << ":" << endl;
        cars[i].getDetails();
        cout << endl;
    }

    cout << "Details of Customer 1:" << endl;
    customer1.getDetails();
    cout << endl;

    cout << "Details of Customer 2:" << endl;
    customer2.getDetails();
    cout << endl;

    return 0;
}
