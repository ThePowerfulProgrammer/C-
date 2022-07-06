#include <iostream>

using namespace std;

const float VAT_RATE = 0.14;

void addVat(float & priceP) {
    priceP += priceP * VAT_RATE ;
}

int main()
{

    float price ;

    cout << "Enter the price of the item: " ;
    cin >> price ;

    addVat(price);

    cout << "The price with added VAT is: R" << price << endl ;
    return 0;
}
