#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <vector>
#include <string>
#include <iostream>

using namespace std;

template <class k, class v> // k = key  v = value

class Dictionary
{
    public:
        Dictionary();
        void add(k key, const v &value);
        string find(k key) const;
        void display();
    private:
        vector <k> keys; // vector type k
        vector <v> values; // vector type v
};

#endif // DICTIONARY_H
