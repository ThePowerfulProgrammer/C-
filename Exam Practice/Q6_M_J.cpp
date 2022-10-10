
#include <iostream>
#include <string.h>
using namespace std;

//December 29, 1953.
//29 December 1953 

string convertDate(string americanDateP) 
{
    int startD;
    int endM;
    string Month;
    string day;
    string year;
    string internationalDate;
    
    startD = americanDateP.find(" ");
    cout << americanDateP.substr(startD+1,2) << endl;
    
    
    return "";   

}
/*
A number of stringmember functions to help you
StringObject.size( ) 
StringObject.substr(startPos, length) 
StringObject.find(substring) 
StringObject.find(substring, startPos) 
StringObject.insert(insertPos, substring); 
StringObject.erase(startPos, length); 
StringObject.replace(startPos, length, substring); 
where 
startPos, lengthand insertPosare of type int, and 
substringis of type string.
*/


int main()
{
    string americanDate;
    //getline(cin, americanDate, '\n');
    //cout << convertDate() << endl;
    cout << convertDate("January 29, 1953.");

    return 0;
}
