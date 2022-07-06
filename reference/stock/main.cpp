#include <iostream>
#include <string>
using namespace std;


// Display the name and price of an item, input the stock,
// calculate the stock value using the price and add it to the stock total
void inputAndCalc(string nameP, float priceP, float & stockTotalP) {
    int stock ;
    float stockVal;

    cout << nameP << ":" << " R" << priceP << endl ;
    cout << "Stock: " ;
    cin >> stock  ;
    stockVal = stock * priceP ;
    stockTotalP += stockVal ;
}

int main()
{
    float stockTotal = 0;
    /*
    string name  ;
    float price ;


    for (int i = 0; i < 3; i++) {

        cout << "Enter the name of the product: " ;
        cin >> name ;
        cout << "Enter the price of the product: " ;
        cin >> price ;

        cout << endl ;

        cout << "Enter the stock of each item!" << endl;
        inputAndCalc(name, price, stockTotal) ;
        cout << "Total value of the stock is R" << stockTotal << endl ;

        cout << endl ;
    }
    */

    inputAndCalc("Plain candles", 8.00, stockTotal);
    inputAndCalc("Scented candles", 10.00, stockTotal);
    inputAndCalc("Hand-painted masks", 12.60, stockTotal);

    cout << "Total value of the stock is R" << stockTotal << endl ;

    return 0;
}
