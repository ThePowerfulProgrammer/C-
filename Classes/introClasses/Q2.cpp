// Use a class in a program to print an address
#include <iostream>
#include <string>

using namespace std; 

class ShowTicket {
    public:
        ShowTicket(); // default constructor
        ShowTicket(string row,int seatNumber) {
            ticketSold = false;
        }
        bool isTicketSold(); // checks if ticket sold
        void soldTicket(); // sets ticketSold = true;
        void displayTicket(); // displays all ticket data
        
        ~ShowTicket() {
            cout << "Ticket used and destroyed" << endl;
        }
    private:
        int row;
        int seatNumber;
        bool ticketSold;
};


ShowTicket::ShowTicket() {
    // Values will be initialised whenever an Address is created
    row = 0;
    seatNumber = 0;
    ticketSold = false;
}

bool ShowTicket::isTicketSold(){
    if (ticketSold) {
        return true;
    }
    return false;
}

void ShowTicket::soldTicket() {
    ticketSold = true;
}

void ShowTicket::displayTicket() {
    cout << "row " << row << endl;
    cout << "seatNumber " << seatNumber << endl;
    cout << "Ticket status " ;
    if (ticketSold) {
        cout << "sold" << endl;
    } else {
        cout << "not sold " << endl;
    }
    cout << endl << endl;
}

int main() {
    ShowTicket morbius;
    ShowTicket TheBatman;
    ShowTicket wonderWoman;
    
    morbius.isTicketSold();
    morbius.soldTicket();
    morbius.displayTicket();
    
    TheBatman.isTicketSold();
    TheBatman.soldTicket();
    TheBatman.displayTicket();
    
    wonderWoman.isTicketSold();
    wonderWoman.soldTicket();
    wonderWoman.displayTicket();
    

    cout << endl;

    return 0;
}