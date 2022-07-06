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

  // VERSION 1 Switch statement

  float amount ; // amount before Discount
  char customerType ; // customerType
  float finalamount ; // amount after Discount

  // assuming all enteries will be via user = cin
  // Assume all input will be UPPERCASE

  // get amount
  cout << "Enter amount in R: " ;
  cin >> amount ;

  // get customerType
  cout << "What customer are you? " ;
  cin >> customerType ;

  // determine Discount
  switch (customerType) {
      case 'S':
      finalamount = amount - (amount * 0.10) ;
      cout << "R"<< finalamount ;
      break ;

      case 'D':
      finalamount = amount - (amount * 0.12) ;
      cout << "R"<< finalamount ;
      break ;

      case 'P':
      finalamount = amount - (amount * 0.15) ;
      cout << "R"<< finalamount ;
      break ;

      case 'O':
      if (amount > 200) {
          finalamount = amount - (amount * 0.10) ;
          cout << "R"<< finalamount ;
      }
      else {
          finalamount = amount ;
          cout << "R"<< finalamount << endl ;
      }
      break ;

  }



    return 0;
}
