
#include <iostream>
#include <string.h>
using namespace std;

//December 29, 1953.
//29 December 1953 

string convertDate(string americanDateP) 
{
    // get date
    int dateStart = americanDateP.find(" ");
    string date = americanDateP.substr(dateStart+1, 2);

    // get month
    string month = americanDateP.substr(0, dateStart);

    // get year
    int yearStart = americanDateP.find(",");
    string year = americanDateP.substr(yearStart+2,4);

    //create new date format
    string internationalDate;
    internationalDate.insert(0,date);
    internationalDate.insert(internationalDate.size()," ");
    internationalDate.insert(internationalDate.size(), month);
    internationalDate.insert(internationalDate.size(), " ");
    internationalDate.insert(internationalDate.size(), year);
    
    
    return internationalDate;   
}

int main()
{   
    string americanDate;
    getline(cin, americanDate, '\n');
    cout << convertDate(americanDate);
    return 0;
}
