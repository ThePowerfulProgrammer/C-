#include <iostream>
#include <cmath>

using namespace std;

void calArea_Circumference(float radius) {
    float pi = 3.12 ;
    float areaP = pi*pow(radius,2) ;
    float circumferenceP = 2*pi*radius ;

    cout << circumferenceP << " Is the circumference of the cirle" << endl ;
    cout << areaP << " Is the area of the cirle" << endl ;
}



int main()
{
    float radius,area,circumference ;

    cout << "Enter a postive value for radius: " ;
    cin >> radius ;



    calArea_Circumference(radius) ;
    return 0;
}
