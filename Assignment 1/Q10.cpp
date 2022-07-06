#include <iostream>
#include <string>

using namespace std;

int main () {

int year; 
char code;
bool book = true;
float discount = 0.20;

cin >> year >> code ;

switch (year) {
    case 2008 : case 2009:
    if (code == 'c') {
        if (!book) {
            discount += 0.20;
        break;
        }
    }
    case 2010:
    if (book) {
        if  (code == 't') {
            book = false ;
            code = 'g' ;
        }
    }
    case 2011:
    if (discount > 0.20 || code == 'g') {
        discount = 0.15;
    }
    else {
        discount += 0.10;
    }
    default:
    discount = 0.25;
    code = 'b';
    book = true;
    
}
discount = 0.35;

cout << year << " " << code << " " << book << " " << discount << endl;
return 0 ;

}