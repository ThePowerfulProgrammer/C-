#include <iostream>

using namespace std;

int main()
{
    float F;
    
    cout << "Enter the Fahrenheit given in your grandmothers cookbook: " ;
    cin >> F ;
    
    float C = 5*(F -32)/9;

    cout << "The Conversion from Fahrenheit to celsius is " << C << endl;
    return 0;
    
    
}