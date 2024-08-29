#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer {
private:
    int id;
    string name;
    string contact;

    static int customerCount; // static varibale to count the numbers of customers

public:
    Customer(int id, string name, string contact);

    // accessor (getter) methods
    int getId() const;
    string getName() const;
    string getContact() const;

    // mutator (setter) methods
    void setName(const string& newName);
    void setContact(const string& newContact);

    void getDetails() const;
    void updateContact(string newContact);

    static int getCustomerCount();  // static member fucntion to access customer count
};

#endif
