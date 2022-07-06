#include <iostream>
#include <string>

using namespace std;

int main ()
{
  // Illustrates how to use >> and getline in a program      
     
  char letter, next;
  cout << "Enter a letter of the alphabet: " ;
  cin >> letter ;
  
  next = letter + 1;
  cout << "The next letter is " << next << endl;
  
  return 0;
}