#include <iostream>
using namespace std; 

float amountAfterYear(float startingAmountP) 
{
    float finalAmount;
    finalAmount = startingAmountP;
    cout << "Month 1 has a starting amount of R " 
         << startingAmountP << endl;
        
    for (int i = 2; i<=12; i++)
    {
        finalAmount = 2 * finalAmount;
        cout << "Month " << i 
        << " final amount R " << finalAmount << endl;
    }

    return finalAmount;
}

int main() 
{
    float startingAmount = 10.0; // amount saved in month 1
    float savings; // amount saved after 12 months
    cout.precision(9);
    savings = amountAfterYear(startingAmount);

    cout << "Total savings after 12 months: R " << savings ;
    return 0;
}