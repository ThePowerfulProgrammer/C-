#include <iostream>
#include <string>
using namespace std;
// Walter Savitch. Problem Solving with C++, 10th edition. Pearson International Edition: Addison-Wesley, 2018



string BookFlight(int flight_number, float & economy_ticket, float departure[], string fullname) {
    string rows[9] = {"A", "B", "C", "D", "E", "F", "G", "H", "I"} ;
    int columns[6] = {1 ,2 ,3 ,4 ,5 ,6} ;
    string ticketType ;
    string seats[50] ;
    string seat;

    cout << "The available seats for " << departure[flight_number] << " are as follows" << endl;

    // append seats to arrays

    for (int i = 0 ; i < 50 ; i++) {

        if (i < 6) {
            seats[i] = "|" + rows[0] + to_string(columns[i]) + "|" ;
        }

        if (i >= 6 and i < 12) {
            seats[i] = "|" + rows[1] + to_string(columns[i%6]) + "|" ;
        }

        if (i >= 12 and i < 18) {
            seats[i] = "|" + rows[2] + to_string(columns[i%6]) + "|" ;
        }

        if (i >= 18 and i < 24) {
            seats[i] = "|" + rows[3] + to_string(columns[i%6]) + "|" ;
        }

        if (i >= 24 and i < 30) {
            seats[i] = "|" + rows[4] + to_string(columns[i%6]) + "|" ;
        }

        if (i >= 30 and i < 36) {
            seats[i] = "|" + rows[5] + to_string(columns[i%6]) + "|" ;
        }

        if (i >= 36 and i < 42) {
            seats[i] = "|" + rows[6] + to_string(columns[i%6]) + "|" ;
        }

        if (i >= 42 and i < 48) {
            seats[i] = "|" + rows[7] + to_string(columns[i%6]) + "|" ;
        }

        if (i >= 48 and i < 50) {
            seats[i] = "|" + rows[8] + to_string(columns[i%6]) + "|" ;
        }

    }
    cout << endl ;



    cout << "First Class(" << economy_ticket+(economy_ticket *0.20) << ")"<< endl ;
    for (int i = 0 ; i < 50; i++) {
        if (i == 3 || i == 9 || i == 15 || i == 21 || i == 27 || i == 33 || i == 39 || i == 45) {
            cout << "---- " ;
        }
        if (i == 6 || i == 12 || i == 18 || i == 24 || i == 30 || i == 36 || i == 42 || i == 48) {
            cout << endl ;
            if (i == 24) {
                cout << "Economy class(" << economy_ticket << ")"<<endl;
            }
        }
        cout << seats[i];

    }


    cout << endl ;
    cout << endl ;
    cout << "Please key in a seat number to choose a seat(eg:A2)" << endl ;
    cin >> seat ;
    for (int j = 0; j < 50; j++) {
        if (seats[j] == "|" + seat + "|") {
            seats[j] = "|**|";
            if (j <= 23 ) {ticketType = "First class" ;}
            else if (j > 23) {ticketType = "Economy class" ;}
        }


    }


    for (int i = 0 ; i < 50; i++) {
        if (i == 3 || i == 9 || i == 15 || i == 21 || i == 27 || i == 33 || i == 39 || i == 45) {
            cout << "---- " ;
        }
        if (i == 6 || i == 12 || i == 18 || i == 24 || i == 30 || i == 36 || i == 42 || i == 48) {
            cout << endl ;
            if (i == 24) {
                cout << "Economy class(" << economy_ticket << ")"<<endl;
            }
        }
        cout << seats[i];

    }

    cout << endl ;

    for (int n = 0 ; n < 3 ; n++) {
        if (n == 0) {
            cout << "*************************"  << endl ;
        }
        if (n == 1) { cout << "Travel ticket for FLIGHT" << endl; }
        if (n == 2) {
            cout << "*************************" << endl ;
        }
    }

    cout << "Name\t\t   " << ":  " << fullname << "\t";
    cout << "Travel ticket class :\t" << ticketType << endl;
    cout << "\t\t\t\t" << "Seat No\t\t  :  " << seat << endl;

    return "" ;
}



void flightTimes(float departure[], float arrival[]) {
    cout << "The available travel times for flights are: " << endl ;
    cout << "\tDepart \t Arrive" << endl ;
    for (int i = 0; i < 5 ; i++ ) {
        cout << i+1 << ".\t" << departure[i] << "\t " << arrival[i] <<  endl ;

    }

}


int main()
{
    string name, surname, fullname ;
    float departure[5] = {7.00, 9.00, 11.00, 13.00, 15.00} ;
    float arrival[5] = {9.30, 11.30, 12.30, 15.30, 17.30} ;
    int flight[5] = {1,2,3,4,5} ;
    float economy_ticket = 1600.00 ; // first class = 1600.00 + 320.00
    int flightNumber ;

    cout.setf(ios::fixed) ;
    cout.precision(2);

    // Program part 0
    cout << "Welcome to COS1511 Flight Booking system " << endl ;
    cout << endl ;

    cout << "Enter full name" << endl ;
    cin >> name >> surname ;
    fullname = name + " " + surname ;

    // Program part 1 --> Flight menu AND passenger input
    flightTimes(departure, arrival) ;
    cout << "Choose the time by entering the option from the list" << endl ;
    cin >> flightNumber;
    // A seperate function will be needed for validation for version 2
    while (flightNumber < 1 || flightNumber > 5) {
        cout << "Incorrect option! Please choose from 1-5 " << endl ;
        cin >> flightNumber ;
    }
    flightNumber -= 1 ;

    cout << BookFlight(flightNumber, economy_ticket, departure, fullname) ;



    return 0;
}


