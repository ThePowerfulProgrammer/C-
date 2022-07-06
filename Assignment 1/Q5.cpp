#include <iostream>

using namespace std;

int main()
{
    /* 
        Code given, should run 10 times
        for (int i = 1; i <= n; i++ )
            cout << i * i ;
            
        Error, n is not declared in the scope :(
        I will fix
    */
    

    // my loop will run 10 times and will give the square of the first 10 integers, 0 is not consindered an integer
    
    int n = 1 ;
    
    while (n < 11 ) {
        cout << n * n << endl ;
        n += 1 ;
    }
    
    
    cout << "Above is the square of the first 10 integers" ;

    return 0;
}