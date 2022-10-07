#include <iostream>

using namespace std;



int main()
{
    // outer loop = num loops run
    for (int outer = 1; outer <=2 ; outer = outer + 1) 
    {
        // main purpose of loop
        for (int inner = 1; inner <= 6; inner = inner + 1)
            cout << "*";
        cout << endl;
    }

    return 0;
}
