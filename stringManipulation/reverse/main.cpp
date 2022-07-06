#include <iostream>
#include <string>

using namespace std;

/*
Type in the program of the previous subactivity and adapt it to display the characters of a string in reverse
order (on the same line).
*/

void reverse(string x) {
    for (int i = x.size(); i >= 0; i--) {
        cout << x[i-1] ;
    }
    cout << endl ;
}

int main()
{
    reverse("Ashish");

    return 0;
}
