#include <iostream>
using namespace std;


// class for a BankAccount
class bankAccount {
    public:
        void set(int dollars, int cents, double rate);
        // postCondition: The account balance has been set to $dollars.cents;
        // int rate set to rate percent
        
        void set(int dollars, double rate);
        // Overload used
        // Postcondition: The account balance has been set to $dollars.00.
        // The interest rate has been set to rate percent
        
        void update();
        // Postcondition: One year of simple interest has been added to the account balance.
        
        double getBalance();
        // Returns the current account balance
        
        double getRate();
        // Returns the current account interest rate as a %
        
        void output(ostream& outs);
        // can replace ostream&  with cout
        // Precondition: if outs is a file output stream, then 
        // outs has alraedy been connected to a file
        // Postcondition: Account balance and int rate have 
        // been written to the stream outs.
        
    private:
        double balance;
        double interestRate;
        
        double fraction(double percent);
        // Converts a % to a fraction, fraction(50.3) --> 0.503
        
};

// scope resolution operator full function definition
void Myobj::showObj() {
    cout << "  x   "<< x <<  "  y  " << y << endl;
}

int main()
{
    BankAccount account1, account2;
    cout << "Start of Test:\n";
    cout << "Start of Test:\n";
    account1.set(123, 99, 3.0);
    cout << "account1 initial statement:\n";
    account1.output(cout);
    account1.set(100, 5.0);
    cout << "account1 with new setup:\n";
    account1.output(cout);

    account1.update( );
    cout << "account1 after update:\n";
    account1.output(cout);
    account2 = account1;
    cout << "account2:\n";
    account2.output(cout);


    return 0;
}

void BankAccount::set(int dollars, int cents, double rate) {
    if ((dollars < 0) || (rate < 0)) {
        cout << "Illegal value for money or int rate. \n";
        return ;
    }
    balance = dollars + 0.01 *cents;
    interestRate = rate;
}


void BankAccount::set(int dollars, double rate) {
    if ((dollars < 0) || (rate < 0)) {
        cout << "Illegal value for money or int rate. \n";
        return ;
    }
    balance = dollars;
    interestRate = rate;
}

void BankAccount::update() {
    balance = balance + fraction(interestRate)*balance;
}

double BankAccount::fraction(double percentValue) {
    return (percentValue / 100.0);
}

double BankAccount::getBalance() {
    return balance;
}


double BankAccount::getRate() {
    return interestRate;
}


// Uses iostream
void BankAccount::output(ostream& outs) {
    outs.setf(ios::fixed);
    outs.setf(ios::showpoint);
    outs.precision(2);
    outs << "Account balance $ " <<  balance << endl;
    outs << "interest Rate " << interestRate << "%" << endl;
}
