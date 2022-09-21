#include <iostream>

using namespace std; 

class Money {
    public:
        Money();
        Money(int x, int y);
        friend Money operator +(const Money& leftPos, const Money& rightPos);
        friend bool operator ==(const Money& leftPos, const Money& rightPos);
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

bool operator ==(const Money& leftPos, const Money& rightPos) {
    return ((leftPos.rands == rightPos.rands) && (leftPos.cents == rightPos.cents) );
}

int Money::getRands() {
    return rands;
}

int Money::getCents() {
    return cents;
}

int main() {
    Money wallet1(10,15);
    Money wallet2(10, 15);
    Money wallet3 = wallet1 + wallet2;
    
    cout << "R" << wallet1.getRands() << "." << wallet1.getCents() << endl;
    cout << "R" << wallet2.getRands() << "." << wallet2.getCents() << endl;
    
    cout << "R" << wallet3.getRands() << "." << wallet3.getCents() << endl;
    
    if (wallet1 == wallet2) {
        cout << "Equal " << endl;
    }
    else {
        cout << "Unequal" << endl;
    }
    return 0;
}















