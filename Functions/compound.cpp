#include <iostream>
#include <math.h>
#include <cmath>
#include <cctype>

using namespace std;

/*
Bank A 9% 5 years
Bank B 10% 8 years
*/

// my function
float compound(float amt, float rate, int years) {
    return  amt* pow(1+rate/100, years) ; 
}



int main() {
    float A,B ;
    int amt ;
    float rate ;
    int years ;
    
    
    cout << "Enter amount to be invested: " ;
    cin >> amt ;
    
    cout << "======" << endl ;
    
    cout << "Bank A " << endl ;
    
    cout << "======" << endl;
    
    cout << "Enter the interest rate: " ;
    cin >> rate ;
    
    cout << "Enter amout of years the amount will be invested: " ;
    cin >> years ;
    
    A = compound(amt, rate, years) ;
    
    cout << "======"  << endl;

    cout << "Bank B " << endl ;
    
    cout << "======" << endl ;
    
    cout << "Enter the interest rate: " ;
    cin >> rate ;
    
    cout << "Enter amout of years the amount will be invested: " ;
    cin >> years ;
    
    cout << "======" << endl ;
    
    B = compound(amt, rate, years) ;
    
    cout << "======" << endl ;    
    
    cout << A << endl ;
    cout << B << endl ; 
    

    return 0 ;
}
