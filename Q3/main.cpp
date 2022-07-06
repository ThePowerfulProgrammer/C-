#include <iostream>

using namespace std;

int main()
{
     // initilise variables
    float var1, var2 ;
    char operation ;


    // set values via keyboards
    cout << "Please enter the first float value: " ;
    cin >> var1 ;
    cout << "Please enter the second value: " ;
    cin >> var2 ;
    cout << "Please enter the operation: " ;
    cin >> operation ;


    // if block to determine output
    if (operation == '+' ) {
        cout << "The sum of " << var1 << " and " << var2  << " is " ;
         //cout.precision(2); if added value is rounded off
        cout << var1 + var2 ;
    }
    if (operation == '-') {
        cout << "The subtraction of " << var1 << " and " << var2  << " is " ;
        cout.precision(2) ;
        cout << var1 - var2 ;
    }
    if (operation == '*') {
        cout << "The multipliaction of " << var1 << " and " << var2  << " is " ;
        cout.precision(2) ;
        cout << var1 * var2 ;
    }
    if (operation == '/') {

        cout << "The division of " << var1 << " and " << var2  << " is " ;
        cout.precision(2) ;
        cout << var1 / var2 ;
    }
    if (operation == '%') {
        // % does not work on floats, therfore we typecast int var1 and var2

        cout << "The modulus of " << var1 << " and " << var2  << " is " ;
        cout.precision(2) ;
        cout << int(var1) % int(var2) ;
    }



    return 0;
}
