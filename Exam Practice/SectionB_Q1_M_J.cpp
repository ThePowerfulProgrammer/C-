#include <iostream>

using namespace std; 


int main() {
    int grade;
    int fee;    // true if a child plays a lead role
    bool leadrole;  // true if a child plays 2 roles
    bool roles2;

    grade = 0;
    leadrole = false;
    roles2 = false;

    switch (grade) 
    {

        case 1: 
        case 2:
            fee = 45;
            break;
        case 3:
        case 4:
        case 5:
            fee = 65;
            break;
        case 6:
        case 7:
            if (roles2) {
                fee = 130;
            } else if (leadrole) {
                fee = 100;
            } else {
                fee = 70;
                break;
            }

    }

    cout << grade << " " << fee << " " << endl;

    return 0 ;
}