#include <iostream>
#include <vector>

using namespace std;


// create template
template <class T>

// b) --> Will work for vector of any base type
int count(vector<T> v, T val) {
    int occurence = 0;
    // start loop
    for (int i=0; i<v.size(); i++) {
        // check for match
        if (v[i] == val) {
            occurence += 1;
        }
    }
    return occurence;
}


int main()
{
    // create a vector with values of type int
    vector<int> data;
    data.push_back(1);
    data.push_back(1);
    data.push_back(5);
    data.push_back(5);
    data.push_back(2);
    data.push_back(8);
    data.push_back(5);
    data.push_back(9);

    // run function --> should return 3
    cout << "Run count with type int:  "<< count(data, 5) << " occurences of v in vector "<< endl;

    // create a vector with values of type string
    vector<string> dataStrings;
    dataStrings.push_back("Ash");
    dataStrings.push_back("Ash");
    dataStrings.push_back("Azura");
    dataStrings.push_back("Julias");
    dataStrings.push_back("Clark");

    // run function --> should return 2
    cout << "Run count with type string: " << count<string>(dataStrings, "Ash") << " occurences of v in vector "<< endl;
    return 0;
}
