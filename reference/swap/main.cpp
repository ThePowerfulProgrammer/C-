#include <iostream>

using namespace std;

// swap values a and b
void swap(int & n1P, int & n2P) {
    int temp;
    temp = n1P;
    n1P = n2P;
    n2P = temp;
}

int main()
{
    int n1 = 5 ;
    int n2 = 10 ;

    swap(n1, n2) ;

    cout << "n1 = " << n1 << endl ;
    cout << "n2 = "<< n2 << endl;
    return 0;
}
