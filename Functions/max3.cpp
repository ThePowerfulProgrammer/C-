#include <iostream>
#include <cctype>

using namespace std;

// my function

float max3(float x, float y, float z) {
    if (x >= y  && x >= z ) 
        return x ;
    if (y >= x && y >= z )
        return y ;
    
    return z ;
}

int main() {
    
    cout << "Enter three floats: " << endl;
    
    cout << max3(18.0,12.0, 26) << endl;

    return 0 ;
}
