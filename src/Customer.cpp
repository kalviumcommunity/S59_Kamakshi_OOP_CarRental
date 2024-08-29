#include "Customer.h"
#include <iostream>
using namespace std;

int Customer::customerCount = 0; // to initialize static variable

Customer::Customer(int id, string name, string contact)
    : id(id), name(name), contact(contact) {
        customerCount++; // to increment customer count when a new customer gets added
    }

// accessor methods
int Customer::getId() const { return id; }
string Customer::getName() const { return name; }
string Customer::getContact() const { return contact; }

// mutator methods
void Customer::setName(const string& newName) { name = newName; }
void Customer::setContact(const string& newContact) { contact = newContact; }


void Customer::getDetails() const {
    cout << "ID: " << this->id << "\nName: " << this->name << "\nContact: " << this->contact << endl;
}

void Customer::updateContact(string newContact) {
    this->contact = newContact;
}

int Customer::getCustomerCount() {
    return customerCount; // to return the current car count
}
