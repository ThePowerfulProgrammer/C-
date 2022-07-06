#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence;
    string oneWord;
    int position ;
    int count = 0;

    cout << "Enter a sentence: " ;
    getline(cin, sentence, '\n');
    cout << "Enter a word to search for: " ;
    cin >> oneWord ;

    // check oneWord len
    if (oneWord.size() > sentence.size()) {
        cout << "One word is larger then sentence" << endl ;
    } else {
        // begin search
        position = sentence.find(oneWord);
        while (position != -1) {
            count ++ ;
            position = sentence.find(oneWord, position+1);
        }
    }



    cout << "The word count of: " << oneWord << " is " << count << " in the sentence" << endl;
    return 0;
}
