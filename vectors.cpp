
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout<<"Hello World" << endl;
    
    vector<int> age = {21,20,19,20,19}; // dynamic array's via the <vector> directive.
    
    
    for (int i =0; i < age.size(); i++) {
        cout << age[i] << " "  ;
        
    }

    return 0;
}
