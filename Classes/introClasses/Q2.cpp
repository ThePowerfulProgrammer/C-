// Use a class in a program to print an address
#include <iostream>
#include <string>

using namespace std; 

class ShowTicket {
    public:
        ShowTicket(); // default constructor
        ShowTicket(string row,int seatNumber, bool ticketSold) {
            ticketSold = false;
        }
        bool isticketSold(); // checks if ticket sold
        void soldTicket(); // sets ticketSold = true;
        void displayTicket(); // displays all ticket data
    private:
        string row;
        int seatNumber;
        bool ticketSold;
       
};



int main() {
 
    return 0;
}