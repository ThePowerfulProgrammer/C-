#include <iostream>
#include <string>

using namespace std;

// returns 1 / 0 depending on if a word is equal to its reverse

string storeReverse(string x) {
    string reversed = "" ;
    for (int i = x.size() - 1;i >= 0;i--) {

        reversed = reversed + x[i];
    }
    return reversed;
}

bool isPalindrome(string original, string reversed) {
    if (original == reversed) {
        return "HEHE" ;
    }
    else {
        return false;
    }
}

int main()
{
    string reversed;
    reversed = storeReverse("able was I ere I saw elba");
    cout << isPalindrome(reversed, "able was I ere I saw elba");

    return 0;
}
