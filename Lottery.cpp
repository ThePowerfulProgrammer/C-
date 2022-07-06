//Lottery numbers
#include <iostream>
using namespace std;

 
int
main () 
{
  
int num1, num2, num3, num4, num5, num6;
  
srand (time (0));
  
// first random number
    num1 = rand () % 49 + 1;
  
// second random number 
    do
    
    {
      
num2 = rand () % 49 + 1;
    
}
  while (num1 == num2);
  
// third random number 
    do
    
    {
      
num3 = rand () % 49 + 1;
    
}
  while ((num1 == num3) || (num2 == num3));
  
// fourth random number 
    do
    
    {
      
num4 = rand () % 49 + 1;
    
}
  while ((num1 == num4) || (num2 == num4) || (num3 == num4));
  
// fifth random number 
    do
    
    {
      
num5 = rand () % 49 + 1;
    
}
  while ((num1 == num5) || (num2 == num5) || (num3 == num5) 
	 ||(num4 == num5));
  
// sixth random number 
    do
    
    {
      
num6 = rand () % 49 + 1;
    
}
  while ((num1 == num6) || (num2 == num6) || (num3 == num6) 
	 ||(num4 == num6) || (num5 == num6));
  
// output
    
cout << "The 6 random numbers are:" << endl;
  
cout << ' ' << num1 << ' ' << num2 << ' ' << num3 
    <<' ' << num4 << ' ' << num5 << ' ' << num6 << endl << endl;
  
return 0;

}
