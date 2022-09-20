#include <iostream>

using namespace std; 

class Money {
    public:
        Money();
        Money(int x, int y);
        friend Money operator +(const Money& leftPos, const Money& rightPos);
        int getRands();
        int getCents();
    private:
        int rands;
        int cents;
};

Money::Money() {
    // sets rands / cents to 0
    rands = 0;
    cents = 0;
}

Money::Money(int x, int y) {
    if (x < 0 || y < 0 ) {
        exit(0);
    }
    else {
        rands = x;
        cents = y;
    }
}

Money operator +(const Money& leftPos, const Money& rightPos) {
    Money temp;
    temp.rands = leftPos.rands + rightPos.rands;
    temp.cents = leftPos.cents + rightPos.cents; 
    return temp;
}

int Money::getRands() {
    return rands;
}

int Money::getCents() {
    return cents;
}

int main() {
    Money money1(10,50);
    Money money2(15, 25);
    Money money3 = money1 + money2;
    
    cout << "R" << money1.getRands() << "." << money1.getCents() << endl;
    cout << "R" << money2.getRands() << "." << money2.getCents() << endl;
    
    cout << "R" << money3.getRands() << "." << money3.getCents() << endl;
    
    
    return 0;
}















