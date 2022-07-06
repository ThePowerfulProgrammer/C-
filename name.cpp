#include <iostream>
#include <string>

using namespace std;

int main ()
{
  // Illustrates how to use >> and getline in a program      
     
  int n;
  string title, firstname, surname ;
  cout << "Enter the title: " ;
  cin >> title ;
  cout << "Enter the first name: " ;
  cin >> firstname ;
  cin.get() ;
  cout << "Enter the surname: " ;
  getline(cin, surname, '\n') ;
  
  cout << "The rearranged name is : " ;
  cout << surname << ", " << title << ", " << firstname << endl;
  return 0;
}