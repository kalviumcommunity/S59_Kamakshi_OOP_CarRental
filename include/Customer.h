#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer {
private:
    int id;
    string name;
    string contact;

public:
    Customer(int id, string name, string contact);
    void getDetails() const;
    void updateContact(string newContact);
};

#endif
