// friend function
// function not part of class but can access class variables
#include <iostream>

using namespace std;

class Money{
    public:
        int rands;
        int cents;
        Money() {rands = 10; cents =10;}

        // Overload +
        Money operator + (Money rightPosistion) {
            Money temp;
            temp.rands = rands + rightPosistion.rands;
            temp.cents = cents + rightPosistion.cents;
            return temp;
        }

        // Overload 
        bool operator == (Money rightPosistion) {
            if (rands == rightPosistion.rands && cents == rightPosistion.cents) {
                return true;   
            }
            return false;
        }

    private:
    // allows access to private data via a friend function
        friend void addMoney(Money & money);
};


// friend function 
void addMoney(Money & money) {
    money.rands += 100;
    money.cents += 1000;
}

int main()
{
    Money money1;
    Money money2;
    money1 == money2;

    addMoney(money1);
    cout << money1.rands << "  " << money1.cents << " " << endl;

    Money money3 = money2 + money2;
    cout << money3.rands << "  " << money3.cents << endl;
    
    return 0;
}
