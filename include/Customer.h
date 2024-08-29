#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer {
private:

// private: only accessible within this class
    int id;
    string name;
    string contact;

    static int customerCount; // static varibale to count the numbers of customers

public:
    Customer(int id, string name, string contact); // constructor is public


    // public accessor (getter) methods
    int getId() const;
    string getName() const;
    string getContact() const;

    //  Public mutator (setter) methods
    void setName(const string& newName);
    void setContact(const string& newContact);

    void getDetails() const;
    void updateContact(string newContact);

    static int getCustomerCount();  //  public static member fucntion to access customer count
};

#endif
