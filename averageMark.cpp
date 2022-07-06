#include <iostream>

using namespace std;

int main()
{
    // if mark == type(float) : avarage returned will be a float
    int mark1, mark2, mark3 ;
    float average;
    
    cout << "Input three marks as whole numbers " << endl;
    cin >> mark1 >> mark2 >> mark3 ;
    
    average = (mark1 + mark2 + mark3) / 3 ;
    
    cout << "The average mark is: " ;
    cout << average ;
    
 
    return 0;
}