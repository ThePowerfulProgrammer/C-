#include <iostream>

using namespace std;

int main()
{
    int seconds;
    
    cout << "Enter a number of seconds " ;
    cin >> seconds ;
    
    cout << seconds / 60 << " minutes and " << seconds % 60 << " seconds " << endl;
    
    
    
    return 0;
    
    
}