
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  // Illustrates how to use >> and getline in a program      
     
  int n;
  string s;
  cout << "Enter a number: ";
  cin >> n;
  cin.get();
  cout << "Enter a sentence: ";
  getline(cin, s, '\n');
  cout << "The number is " << n << endl;
  cout << "THe sentence is " << s << endl;
  
  return 0;
}