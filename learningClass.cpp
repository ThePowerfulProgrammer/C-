
#include <iostream>

using namespace std;

class Money {
    public:
        Money();
        // Precondition -> No values
        // Postcondition -> sets rands to 0 and cents to .00
        Money(int x, double y);
        // Precondition -> rands set to int and cents set to int
        // Postcondition -> sets rands to x and cents to y
        friend Money operator +(const Money& leftPos, const Money& rightPos);
        // Precondition -> Money obj used for addition
        // Postcondition -> returns Money object with a summed rands and cents
        int getRands();
        // Postcondition -> Money obj to grab relevant rands and cents
        // Postcondition -> return obj.rands and obj.cents
        
        
    private:
        int rands;
        double cents;
};

Money::Money() {
    int rands = 0;
    double cents = 0;
}

Money::Money(int x, double y) {
     rands = x;
     cents = y;
}

int Money::getRands() {
    cout << "R";
    return rands;
}

Money operator +(const Money& leftPos, const Money& rightPos) {
    Money temp;
    temp.rands = leftPos.rands + rightPos.rands;
    temp.cents = leftPos.cents + rightPos.cents;
    return temp;
}

int main()
{
    Money money1(10,10);
    Money money2(5,5);
    Money money3;
    money3 = money1 + money2;

    cout << money1.getRands();
    cout << endl;
    cout << money2.getRands() << endl;
    cout << money3.getRands() << endl;
    

    return 0;
}
