#include "Customer.h"
#include <iostream>
using namespace std;

Customer::Customer(int id, string name, string contact)
    : id(id), name(name), contact(contact) {}

void Customer::getDetails() const {
    cout << "ID: " << this->id << "\nName: " << this->name << "\nContact: " << this->contact << endl;
}

void Customer::updateContact(string newContact) {
    this->contact = newContact;
}
