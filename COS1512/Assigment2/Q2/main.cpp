#include <iostream>
#include <assert.h>

using namespace std;

/*
235.97 7.35 false
5430.55 120.00 true
856.00 -12.5 false
120.00 130.00 true
*/

// Write a C++ program that includes a function to calculate the discount applicable on the price of an item.
// assumes discount is already % of 100 || 7.35 is not 7.35/100
double discountApplicable(double & price, double discount, bool amtOff) {
    assert(discount > 0);
    if (amtOff) {
        // discount == fixed
        price = price - discount;
        assert(price > 0);
        cout << "Discount applicable is " ;
        return discount;
    } else {
        // dicount == %
        price = price - (price*discount);
        assert(price > 0);
        cout << "Discount applicable is " ;
        return discount;
    }

}

int main()
{
    double price = 120.00 ;
    cout << discountApplicable(price, 130.00, true) << endl;
    cout << "Price is ";
    cout << price ;
    return 0;
}
