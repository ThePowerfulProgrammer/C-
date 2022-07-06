#include <iostream>

using namespace std;

int
main ()
{

/*
    CODE GIVEN

  int x = 1;
  while (x != 12)
    {
      cout << x << endl;
      x = x + 2;
    }

    Issue, While loop terminates when x == 12 BUT x will never be 12 as x = x + 2
    x = 1 + 2 = 3
    x = 3 + 2 = 5
    x = 5 + 2 = 7
    x = 7 + 2 = 9
    x = 9 + 2 = 11
    x = 11 + 2 = 13 ----------------------------> Not 12

    This shows x will not be 12 and run forever!
*/

 // My program

int x = 2 ;

 while (x != 12) {
    cout << x << endl ;
    x += 2 ;
 }
  return 0;

}
