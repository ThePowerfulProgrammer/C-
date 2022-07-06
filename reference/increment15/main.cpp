#include <iostream>

using namespace std;


// add 15 to a reference parameter and output it
void increment15(int & startP) {
    startP += 15 ;

    cout << startP << endl ;
}

int main()
{
    int start;

    cout << "Enter an integer: " ;
    cin >> start ;

    increment15(start) ;

    return 0;
}
