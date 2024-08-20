#include "Customer.h"
#include <iostream>
using namespace std;

int Customer::customerCount = 0; // to initialize static variable

Customer::Customer(int id, string name, string contact)
    : id(id), name(name), contact(contact) {
        customerCount++; // to increment customer count when a new customer gets added
    }

void Customer::getDetails() const {
    cout << "ID: " << this->id << "\nName: " << this->name << "\nContact: " << this->contact << endl;
}

void Customer::updateContact(string newContact) {
    this->contact = newContact;
}
