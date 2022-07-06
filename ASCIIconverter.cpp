#include <iostream>

using namespace std;

int main ()
{
  char c;
  int i;
  cout << "Enter an interger: " ;
  cin >> i ;
  c = i ;
  cout << i << " represents the character " << char(c) << endl;
  
  return 0;
}