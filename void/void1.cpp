
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
    int m;
    cout << "Enter a positive integer: " ;
    cin >> m ;
    
    for (int j = 1; j <= m; j++) {
        displayRow(j, '@');
    }
    
    
    

    return 0;
}
