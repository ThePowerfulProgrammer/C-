#include <iostream> 
using namespace std;

int
main ()
{
  int numberOfItems;
  int count;			//loop counter for the loop 
  int caloriesForItem;
  int totalCalories;
  
  cout << "How many items did you eat today? ";

  cin >> numberOfItems;
  cout << "Enter the number of calories in each of the " << numberOfItems << " items eaten: " << endl;


// My code WHILE LOOP
  int i = 0 ;
  
  // set totalCalories to 0
  totalCalories = 0;
  
  while (i < numberOfItems) {
      cout << "Enter calories: " ;
      cin >> caloriesForItem ;
      
      i = i + 1 ;
      
      totalCalories = totalCalories + caloriesForItem ;
  }
  

  cout << "Total calories eaten today = " << totalCalories;
  return 0;
}
