#include <iostream>

using namespace std;

// swap values a and b and c -> a = b , b = c , c = a
void rotate(int & n1P, int & n2P, int & n3P) {
    int temp;
    temp = n1P;
    n1P = n2P;
    n2P = n3P;
    n3P = temp;
}

int main()
{
    int n1 = 1 ;
    int n2 = 2 ;
    int n3 = 3 ;

    rotate(n1, n2, n3) ;

    cout << "n1 = " << n1 << endl ;
    cout << "n2 = "<< n2 << endl;
    cout << "n3 = "<< n3 << endl;

    return 0;
}
