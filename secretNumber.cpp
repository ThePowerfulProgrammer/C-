#include <iostream>

using namespace std;

int main()
{
    // Generate a secret number 0 - 100
    // Have user guess ONCE 
    // Return difference between guess and secret number
    
    
    int secret;
    int guess;
    
    srand(time(0));
    
    // set secret number
    for (int i = 0 ; i < 1 ; i++ ) {
        secret = 1 + rand() % 100 ;
        cout << "Secret number is: " << secret << endl ;
    }
    
    // Get user input
    
    cout << "Secret number set, Your turn to guess: " ;
    cin >> guess ;
    
    if (abs(guess) == secret) {
        cout << "Congrats YOU GUESSED CORRECTLY" << endl ;
    }
    else if (abs(guess) < secret) {

        cout << "WRONG, The diff between secret number and your guess is: " << (secret - guess) << endl ;
    }
    else {
        cout << "WRONG, The diff between secret number and your guess is: " << abs(secret - guess) << endl ;
    }
    
    return 0;
}












