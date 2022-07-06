#include <iostream>
using namespace std;

int
main ()
{
  int numberOfItems;
  int count;			//loop counter for the loop
  int caloriesForItem;
  int totalCalories;

  /* ISSUE  + 120 + 60 + 150 + 600 + 1200 + 300 + 200 = 2630 not 2631*/

  cout << "How many items did you eat today? ";

  cin >> numberOfItems;
  cout << "Enter the number of calories in each of the " << numberOfItems << " items eaten: " << endl;


// My code FOR LOOP


  // set totalCalories to 0
  totalCalories = 0;

  for (int count = 0; count < numberOfItems ; count++) {
      cout << "Enter calories: " ;
      cin >> caloriesForItem ;


      totalCalories = totalCalories + caloriesForItem ;
  }


  cout << "Total calories eaten today = " << totalCalories;
  return 0;
}
