#include <iostream>

using namespace std; 

int main() {

    // using an int examples But works for all vars even arrays using new to create a dynamic array

    int x = 21;
    // first * used to declare a pointer
    int *y;
    // & used to get memory location and therefore data at memory
    y = &x;

    // is * used again it will be a dereferencing operator


    // print x and x memory location using y
    cout << " x " << x << " x memory location " << y << endl; 
    for (int i = 0; i<3;i++) {
        cout << "\n";
    }
    // print x and y 
    cout << " x " << x << "  y  " << *y << endl;

    return 0;
}