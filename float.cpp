#include <iostream>
using namespace std;

int main()
{

    const float VAT_RATE = 0.14; // set a constant as VAT_RATE is not likely to change
    float price,vat;
    
    cout << "Enter the price: " ;
    cin >> price ;
    
    vat = price * VAT_RATE ;
    
    cout << endl << "VAT: " << vat << endl;
        
    return 0;
}