#include <iostream>
#include <fstream>>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream InStream;
    ofstream OutStream;

    //open file to write
    OutStream.open("learning.txt", ios::app);
    if (OutStream.fail()) {
        cout << "File failed to open " << endl;
        exit(1);
    }
    string line;
    do {
        cout << "Enter a line of data" << endl;
        cin >> line;
        OutStream << line;
    } while (line != "");
    OutStream.close();


    // open file to read
    InStream.open("learning.txt");
    // test failsafe
    if (InStream.fail()) {
        cout << "File cannot be opened" << endl;
        exit(1);
    }

    // associate type
    string text;
    // read words from file using text
    // find specific text
    while (InStream >> text) {
        if (text == "Ashish") {
            cout << text << " Text is present" ;
        }

    }

    // close file, declutter memory
    InStream.close();

    // find specific data from file


    return 0;
}
