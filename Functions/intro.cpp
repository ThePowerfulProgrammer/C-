#include <iostream>
#include <cctype>

using namespace std;

// my functions
int myAbs(int i) 
{
    if (i < 0) 
        i *= -1 ;
    
    return i ;
    
}

int main() {
    
    int secret, guess, absError ;
    
    srand(time(0)) ;
    secret = 1 + rand() % 100 ;
    
    cout << "Guess the secret number: " ;
    cin >> guess ;
    
    absError = myAbs(secret - guess) ;
    cout << "You were out by: " << absError << endl;
    
    cout << myAbs(-3) ;
    
    return 0 ;
}
