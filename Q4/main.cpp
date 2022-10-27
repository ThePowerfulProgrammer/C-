#include <iostream>
#include <vector>

using namespace std;

// a)
int count(vector<int> v, int val) {
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
    // create a vector with values
    vector<int> data = {1,1,5,5,2,8,5,9};

    // run function --> should return 3
    cout << count(data, 5) << endl;

    return 0;
}
