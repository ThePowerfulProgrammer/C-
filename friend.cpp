// friend function
// function not part of class but can access class variables
#include <iostream>

using namespace std;

class Money{
    public:
        int rands;
        int cents;
        Money() {rands = 10; cents =10;}
    private:
        friend void addMoney(Money & money);
};

void addMoney(Money & money) {
    money.rands += 100;
    money.cents += 1000;
}

int main()
{
    Money money1;
    cout << endl;
    addMoney(money1);
    cout << money1.rands << "  " << money1.cents << " " << endl;
    return 0;
}
