#include <iostream>
#include <string>

using namespace std; 

class Address {
    public:
        Address(); // default constructor
    private:
        string streetName;
        int streetNr;
        string city;
        string postalCode;
};

Address::Address() {
    // Values will be initialised whenever an Address is created
    streetName = "";
    city = "";
    streetNr = 0;
    postalCode = "0000";
}

int main() {
    Address address1;
    cout << address1.streetName <<< endl;
    return 0;
}