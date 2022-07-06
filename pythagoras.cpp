//Pythagoras theorem
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

 
int main() {
    int side1, side2 ;
    int squareSum ;
    float side3 ;
    
    cout << "Enter the value of side1 and side2: " ;
    cin >> side1 >> side2 ;
    
    squareSum = pow(side1, 2) + pow(side2, 2) ;
    
    side3 = sqrt(squareSum) ;
    
    cout << "Using the pythagorian theorem a = sqrt(b^2 + c^2), the value of a is: " ;
    cout << side3 ;

return 0;

}