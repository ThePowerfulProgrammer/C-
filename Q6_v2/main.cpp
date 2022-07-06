#include <iostream>

using namespace std;

int main()
{
  /*
    Discount list

    Student = 10%
    BookDealer = 12%
    Pensioner = 15%
    regularCustomer > R200 = 10%

  */

  // VERSION 2 nested (if) statement

  float amount ; // amount before Discount
  char customerType ; // customerType
  float finalamount ; // amount after Discount

  // assuming all enteries will be via user = cin
  // assume all input will be UPPERCASE!

  // get amount
  cout << "Enter amount in R: " ;
  cin >> amount ;

  // get customerType
  cout << "What customer are you? " ;
  cin >> customerType ;

  // determine Discount
  if (customerType == 'S') {
      finalamount = amount - (amount * 0.10) ;
      cout << "R"<< finalamount ;
  }
   if (customerType == 'D') {
      finalamount = amount - (amount * 0.12) ;
      cout << "R"<< finalamount ;
  }
  if (customerType == 'P') {
      finalamount = amount - (amount * 0.15) ;
      cout << "R"<< finalamount ;
  }
  if (customerType == 'O') {
      if (amount > 200 ) {
          finalamount = amount - (amount * 0.10) ;
          cout << "R"<< finalamount ;
      }
      else {
          finalamount = amount ;
          cout << "R" << finalamount ;
      }

  }



    return 0;
}
