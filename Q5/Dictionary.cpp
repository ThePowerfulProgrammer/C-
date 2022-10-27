#ifndef DICTIONARY_CPP
#define DICTIONARY_CPP
#include "Dictionary.h"
#include <vector>
#include <iostream>

using namespace std;

template <class k, class v>
Dictionary<k,v>::Dictionary()
{
    // does nothing
};

template <class k, class v>
void Dictionary<k,v>::add(k key, const v &value) {
    keys.push_back(key);
    values.push_back(value);
}


template <class k, class v>
string Dictionary<k,v>::find(k key) const {
    string value = "";
    for (unsigned int i = 0; i<keys.size(); i++) {
        if (key == keys[i]) {
            value = values[i];
        }
    }

    if (value == "") {
        return "no such key can be found";
    } else {
        return value;
    }
}


template <class k, class v>
void Dictionary<k,v>::display() {
    for (unsigned int i = 0; i<keys.size(); i++) {
        cout << keys[i] << " " << values[i] << endl;
    }
    return;
}

#endif // DICTIONARY_CPP
