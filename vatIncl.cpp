#include <iostream>

using namespace std;

int main()
{
    const float VAT_RATE = 0.14;
    float price1, price2, price3, total, vat, vatIncl;
    
    // Input three prices
    cout << "Enter the prices of three items: " << endl;
    cin >> price1 >> price2 >> price3 ;
    
    // Calculate total, VAT and Total including VAT
    total = price1 + price2 + price3 ;
    vat = total * VAT_RATE ;
    vatIncl = total + vat ;
    
    cout << "The total price is R" << vatIncl << endl ;

    return 0;
}