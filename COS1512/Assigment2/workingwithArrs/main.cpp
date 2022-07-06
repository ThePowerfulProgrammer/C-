// remove first letter from word -> add to end of word and check if equal to original word
// word must be an array of characters
// if potato == potato then otatop == otatop
#include <iostream>
#include<ctype.h>
#include<cstring>

using namespace std;

// word post removing first char
void newWord(char characters[], int wordlen, char newStr[]) {
    for (int i=1; i<wordlen; i++) {
        newStr[i-1] = characters[i];
        // add first letter to end
        if (i == wordlen-1) {
            newStr[wordlen-1] = characters[0];
        }
    }
    //cout << newStr << endl;
}

bool isPalindrome(int wordCount, int wordLen) {
    // if wordcount == wordlen, after checking letters at position i are equal
    // words are equal
    if (wordCount == wordLen) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    char str[20];
    char newStr[20];
    int wordCount = 0;


    cout << "Enter a word to check (20 chars max): " ;
    cin >> str ;
    // length input
    int wordLen = strlen(str);

    newWord(str,wordLen, newStr);

    // reverse original string --> allows to check if all letters at position i are equal
    strrev(str);

    // letter check
    for (int i=0; i < wordLen; i++) {
        if (str[i] == newStr[i]) {
             //cout << str[i] << " == "<< newStr[i] << ", ";
             wordCount ++;
        }
    }

    cout << isPalindrome(wordCount, wordLen);

    return 0;
}
