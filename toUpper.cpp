//toupper(), tolower()
#include <iostream>
#include <math.h>
#include <cmath>
#include <cctype>
using namespace std;

 
int main() {
    char letter;
    
    cout << "Enter a letter: " ;
    cin >> letter ;
    
    cout << "Capitalize of letter: " << toupper(letter) << endl ; // for lower letter and non-alphabet, returns ASCII value of uppercase
    cout << "Capitalize of letter: " << (char) toupper(letter) ; // UNDEFINED if 

return 0;

}
