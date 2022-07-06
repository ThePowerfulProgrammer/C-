/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


void displayRow(int n, char c) {
    for (int i = 0 ; i < n ; i++) {
        cout << c ;
    }
    cout << endl;
}


int main()
{
    int value, total, sum, average ;
    
    total = 0;
    sum = 0;
    
    cout << "Enter the values (Negative to stop): " << endl;
    cin >> value ;
    
    while (value > 0) {
        total += value;
        sum++;
        displayRow(value, '*');
        cin >> value ;
    }
    
    average = total/sum;
    cout << "The average is " << average << endl ;
    displayRow(average, '+') ;

    return 0;
}
