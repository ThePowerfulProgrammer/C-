#include <iostream>

using namespace std;

// two params
double max(double x, double y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

// three params
double max(double x, double y, double z) {
    if (x > y && x > z) {
        return x;
    } else if (y > x && y > z) {
        return y;
    } else {
        return z;
    }
}

int main()
{
    cout << "max function with two params returning the largest" << endl;
    cout << max(80,9.16) << endl;
    cout << endl;
    cout << "max function with three params returning the largest" << endl;
    cout << max(100.19,69.69,9.69) << endl;

    return 0;
}
