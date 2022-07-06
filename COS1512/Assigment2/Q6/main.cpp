#include <iostream>
#include <vector>
#include<string.h>
#include <sstream>

using namespace std;

int main()
{
    /*“what” “book”
    “is” “that” “you” “are” “reading”.*/

    vector <string> v{"what","book","is","that","you","are","reading"};

    for (int i=0;i<7;i++) {
        cout << v[i] << " ";
        if (i==6) {
            cout << "? ";
        }
    }

    // user input

    string book, T;  // declare string variables
    int wordCount =0;

    getline(cin, book); // use getline() function to read a line of string and store into book variable.

    stringstream X(book); // X is an object of stringstream that references the book string

    // break into single words
    while (getline(X, T, ' ')) {
        v.push_back(T);
        wordCount ++;
    }

    /* show book as a series of words
    for (int i=7; i<7+wordCount;i++) {
        cout << v[i] << " " ;
    }*/

    return 0;
}
