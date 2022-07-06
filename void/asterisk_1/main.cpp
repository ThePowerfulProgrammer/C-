/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


void frameAsterisk(int w, int h, char c) {

}


int main()
{
    // start basic frame
    int h = 5;
    int w = 3;
    string space = "   " ;

    for (int i = 0 ; i < h ; i++) {
        cout << "*" ;
    }

    cout << endl;

    for (int j = 0; j < w; j++) {
        cout << "*" << space << "*" <<  endl ;

    }

    for (int i = 0 ; i < h ; i++) {
        cout << "*" ;
    }

    return 0;
}
