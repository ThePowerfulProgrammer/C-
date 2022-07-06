#include <iostream>
#include <cctype>

using namespace std;

// my function
float max2(float x, float y) {
    if (x > y )
        return x; 
    return y ;
}

int main() {
    
    cout << "Enter two floats: " << endl;
    
    cout << max2(18.0,12.0) << endl;

    return 0 ;
}
