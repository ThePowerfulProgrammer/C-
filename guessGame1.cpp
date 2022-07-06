#include <iostream>

using namespace std;

int main() {
    int secret, guess, absError, bestGuess, smallestError ;
    
    srand(time(0)) ;
    secret = 1 + rand() % 100 ;
    
    cout << "Enter your first guess: " ;
    cin >> guess ;
    
    smallestError = 100 ;
    bestGuess = -1 ;
    
    while (guess != 0 ) {
        absError = abs(secret - guess) ;
        
        if (absError < smallestError) {
            smallestError = absError ;
            bestGuess = guess ;
            cout << "This is the best guess so far" << endl ;
        }
        
        cout << "Enter next guess: " ;
        cin >> guess ;
        
    }
    cout << "The secret number was: " << secret << endl ;
    cout << "The best guess was:  " << bestGuess << endl ;


    return 0 ;
    
}











