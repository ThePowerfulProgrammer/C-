#include <iostream>

using namespace std;


struct TagInfo {
    string name;
    string flight;
    string destination;
    float mass;
};

void getPassengerInfo(TagInfo & t) {
    t.name = "Josephine Soap";
    t.flight = "ABC123";
    t.destination = "JNB - OR Tambo International";
    t.mass = 20.0;
}


void getAddress(string & line1, string & line2, string & line3, string & line4) {
    getline(cin >> ws, line1, '\n');
    getline(cin >> ws, line2, '\n');
    getline(cin >> ws, line3, '\n');
    getline(cin >> ws, line4, '\n');
}

int main()
{
    string line1,line2,line3,line4 ;
    string answer;
    TagInfo passenger1;
    getPassengerInfo(passenger1);

    cout << "ABC Airlines" << endl;
    cout << "============" << endl;
    cout << "Passenger: " << passenger1.name << endl;
    cout << "Flight: " << passenger1.flight << endl;
    cout << "Destination: " << passenger1.destination << endl;
    cout << "Mass of luggage: " << passenger1.mass << " kgs"<< endl;
    cout << "Is all the above information correct (Y/N)? " ;
    cin >> answer ;
    if (answer == "N") {
        cout << passenger1.name << " notify the check-in staff and terminate." << endl;
        return 0;
    }
    cout << "We provide a FREE delivery service - up to 100 km from airport. " << endl;
    cout << "Would you like your luggage delivered (Y/N)? " ;
    cin >> answer ;
    if (answer == "Y") {
        getAddress(line1, line2, line3, line4);
        cout << "Thank You!" << endl;
        cout << "Your luggage will be delivered within 3 hours of arrival." << endl;
        cout << "==========" << endl;
    }
    else {
        cout << "*** PICK UP AT AIRPORT *** " << endl;
    }


    return 0;
}
