#include <iostream>

using namespace std;

int main()
{
    int length,width ;
    float area;
    float pricePerSquare = 59.50;
    
    cout << "Enter the length and width of a room: " << endl;
    cin >> length >> width ;
    
    cout.setf(ios::fixed);
    cout.precision(3);
    
    area = (length * width) ;
    cout << "AREA of the room is: " ;
    cout << area << endl ;
    
    cout.precision(2);
    cout << "Total price for wall-to-call carpeting: R" << (pricePerSquare * area) << endl;
    
    
    return 0;
}