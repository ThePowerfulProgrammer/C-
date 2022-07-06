#include <iostream>
using namespace std;

int main()
{
    // Draw a variable diagram for the below code ;
    
    int j,k,m,n;
    j = 3;
    k = 2;
    m = (j*j - 6) /k ;
    n = j * j -6 /k ;
    cout << j << k << " " << m << " " << n << endl;
    j = m / 2+3*j ;
    k = j - m * n ;
    cout << j << " " << k << " " << m << " " << n << endl;
    
    return 0;
}
