#include "Customer.h"
#include <iostream>
using namespace std;

Customer::Customer(int id, string name, string contact)
    : id(id), name(name), contact(contact) {}

void Customer::getDetails() const {
    cout << "ID: " << id << "\nName: " << name << "\nContact: " << contact << endl;
}

void Customer::updateContact(string newContact) {
    contact = newContact;
}
