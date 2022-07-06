#include <iostream>

using namespace std;

int main()
{
    int r ;
    
    srand(time(0)) // different sequence everytime

    for (int i = 0 ; i < 10 ; i++ ) {
        r = rand() ;       //r = rand() % 50 ; generate random numbers from 0 - (N - 1) n N = 50
                           // 10 + rand() % 50; generate random numbers from 10 - 49
        cout << "The number is " <<  r << endl;
    }

    return 0;
}

// displays 10 numbers randomly but always in the same sequence
// solve using srand(seed)