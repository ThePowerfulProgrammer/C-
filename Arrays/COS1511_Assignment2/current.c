/*#include <iostream>
#include <string>
using namespace std;


string passenger() {
    string name ;
    string surname ;
    string fullname ;
    cout << "Enter full name" << endl ;
    cin >> name >> surname ;

    fullname = name + " " + surname ;
    return  fullname;
}

string book_flight() {
    int number ; // number corresponds to flight number 1-5
    cout << "Choose the time by entering the option number from the displayed list: " << endl ;
    do {
        cin >> number ;
        if (number < 1 || number > 5) {
            cout << "Incorrect option! Please choose from 1-5." << endl ;
        }
    } while (number < 1 || number > 5) ;

    number = number - 1 ; // WHY? well position starts at 0 therefore number - 1
    return "" ;
}

string flight_times(float departures[], float arrivals[]) {
    cout << "The available travel times for flights are: " << endl ;
    cout << "\tDepart \t Arrive" << endl ;
    for (int i = 0; i < 5 ; i++ ) {
        cout << i+1 << ".\t" << departures[i] << "\t " << arrivals[i] <<  endl ;

    }

    book_flight() ;

    return "" ;
}

string pre_book_seats(int flight_number) {
    string rows[9] = {"A", "B", "C", "D", "E", "F", "G", "H", "I"} ;
    int columns[6] = {1 ,2 ,3 ,4 ,5 ,6} ;

    // total seats = 50
    cout << "First Class(1920.00)" << endl ;
    for (int i = 0 ; i < 50 ; i++) {
        if (i < 6) {
            if (i == 3 ) {cout << "---- " ;}

            cout << "|"<< rows[0] << columns[i] << "|"  << " ";
        }
        if (i == 6) { cout << endl ;}

        if (i >= 6 and i < 12) {
            if (i == 9 ) {cout << "---- " ;}
            cout << "|"<< rows[1] << columns[i%6] << "|" << " " ;
        }

        if (i == 12) { cout << endl ;}

        if (i >= 12 and i < 18) {
            if (i == 15 ) {cout << "---- " ;}
            cout << "|" << rows[2] << columns[i%6] << "|" << " " ;
        }

        if (i == 18) { cout << endl ;}

        if (i >= 18 and i < 24) {
            if (i == 21 ) {cout << "---- " ;}
            cout << "|" << rows[3] << columns[i%6] << "|" << " " ;

        }



        if (i == 24 ) {
            cout << endl;
            cout << "Economy class(1600.00)" << endl;
        }


        if (i >= 24 and i < 30) {
            if (i == 27 ) {cout << "---- " ;}
            cout << "|" << rows[4] << columns[i%6] << "|" << " " ;
        }

        if (i == 30) { cout << endl ;}

        if (i >= 30 and i < 36) {
            if (i == 33 ) {cout << "---- " ;}
            cout << "|" << rows[5] << columns[i%6] << "|" << " " ;
        }

        if (i == 36) { cout << endl ;}

        if (i >= 36 and i < 42) {
            if (i == 39 ) {cout << "---- " ;}
            cout << "|" << rows[6] << columns[i%6] << "|" << " " ;
        }

        if (i == 42) { cout << endl ;}

        if (i >= 42 and i < 48) {
            if (i == 45 ) {cout << "---- " ;}
            cout << "|" << rows[7] << columns[i%6] << "|" << " " ;
        }

        if (i == 48) { cout << endl ;}

        if (i >= 48 and i < 50) {
            cout << "|" << rows[8] << columns[i%6] << "|" << " " ;
        }



    }

    return "" ;
}

int main()
{
    float departures[5] = {7.00, 9.00, 11.00, 13.00, 15.00} ;
    float arrivals[5] = {9.30, 11.30, 13.30, 15.30, 17.30} ;
    float economy_ticket = 1600.00 ;

    // set decimal precision
    cout.setf(ios::fixed) ;
    cout.precision(2);

    // Program part 0

    cout << "Welcome to COS1511 Flight Booking system " << endl ;
    cout << endl ;

    // Program part 1

    passenger() ;
    cout << endl ;

    // Program part 2

    flight_times(departures, arrivals) ;

    // Program part 3

    pre_book_seats(1) ;


    return 0;
}
*/
