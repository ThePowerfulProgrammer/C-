// Use a class in a program to print an address
#include <iostream>
#include <string>

using namespace std; 

class Address {
    public:
        Address(); // default constructor
        void addstreetName(); // planned on 1 mutator but pdf states mutators
        void addstreetNo();
        void addcity();
        void addPostalCode();
        void displayAddress() const; // display address information
    private:
        string streetName;
        int streetNr;
        string city;
        string postalCode;
};

void Address::addstreetName() {
    cout << "Street name:      " ;
    getline(cin, streetName, '\n');
}

void Address::addstreetNo() {
    cout << "Street number:    " ;
    cin >> streetNr ;
}

void Address::addcity() {
    cout << "City:             " ;
    cin >> city;
}

void Address::addPostalCode() {
    cout << "Postal code:      " ;
    cin >> postalCode ;
}

// What is proper address format? -> I will use -> streetNumber streetName, City, postalCode
void Address::displayAddress() const {
    cout << streetNr ;
    cout << streetName;
    cout << city;
    cout << postalCode;
}

Address::Address() {
    // Values will be initialised whenever an Address is created
    streetName = "";
    city = "";
    streetNr = 0;
    postalCode = "0000";
}


int main() {
    Address address1;
    address1.addstreetName();

    address1.displayAddress();
    return 0;
}