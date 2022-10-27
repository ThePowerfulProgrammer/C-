#include <iostream>
#include <cstdlib>
#include "Dictionary.h"
#include "Dictionary.cpp"
#include <vector>

using namespace std;

// used to run class Dictioanry with different values
// hard values
void secondRun() {
    Dictionary<string,float> parts;

    parts.add("bday", 9.0);

    parts.display();
    cout << "The part for key bday " << "is " ;
    cout << parts.find("bday");
}

int main()
{
    // DICTIONARY 1
/*
    Dictionary<int,string> parts; // key = int, value = string
    string part;
    int key;

    // add 4 values to the parts dictionary
    for (int i = 0; i<=3; i++) {
        cout << "Please enter a part name and a key to add to the parts dictionary." << endl;
        cout << "Part name: ";
        getline(cin, part);
        cout << "Key for part name: ";
        cin >> key;
        parts.add(key,part);
        cin.get();
    }
    cout << endl;

    parts.display();
    cout << endl;

    // find the part for a key
    cout << "For which key do you want to find the part? ";
    cin >> key;
    cout << "The part for key " << key << " is ";
    cout << parts.find(key);
*/
    cout << endl << endl;
    cout << "Now use void funtion secondRun() for instance of Dictionary<float,string>" << endl;
    secondRun();




     return 0;
}
