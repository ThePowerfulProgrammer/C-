/*
    Snoepies Spaza shop sells snacks and sweets, Apart from the problem of having to remember the prices of the different items,
    keying each price when adding up the total is tedious.

*/

/*
Code -1 to cancel
7
    R2.65
13
    R4.50
0
    R4.90
-1
Total: Rxxx.xx

*/

#include <iostream>

using namespace std;

int main()
{

    float prices[8] = {4.90, 5.25, 5.45, 7.95, 1.10, 1.10, 1.85, 2.65} ;
    int code ;
    float total;

    cout << "Enter the item code 1 - 7, -1 to end " << endl ;
    cin >> code ;

    cout.setf(ios::fixed) ;
    cout.precision(2);


    while (code != -1) {
        if (code < -1 || code > 8) {
            break ;
        }

        cout << "\tR" << prices[code] << endl ;
        total += prices[code] ;
        cin >> code ;
    }

    cout << "Total R" << total << endl ;



    return 0;
}





