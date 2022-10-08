#include <iostream>

using namespace std; 

void approvedFunds(string courseP, string nameP, string dateP, float costP, bool & approvedP) 
{
    cout << "T or F ? " << endl;
    approvedP = true;
}

int main() {
    string name, course, date;
    float cost;
    bool approved;

    approvedFunds("Memory enhancement", "Ash r", "03/01/2001", 595.00, approved);
    cout << approved << endl;

    return 0 ;
}