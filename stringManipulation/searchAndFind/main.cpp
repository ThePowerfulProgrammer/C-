#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence,oneWord;
    int position;

    // Prompt for a search for a word

    cout << "Enter a sentence : " << endl ;
    getline(cin, sentence, '\n') ;

    cout << "Enter a word to seach for: " << endl;
    cin >> oneWord ;

    if (oneWord.size() > sentence.size()) {
        cout << oneWord << " is longer then the sentence" << endl ;
    } else {
        // Find the first occurence of the word
        position = sentence.find(oneWord);
        if (position != -1) {
            cout << oneWord << " appears in position " << position << endl ;
        } else {
            cout << oneWord << " does not appear in sentence" << endl ;
        }

    }

    return 0;
}
