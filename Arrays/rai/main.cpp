#include <iostream>

using namespace std;

int main()
{
    int MAX_MARKS = 100;
    int examMARKS[MAX_MARKS];
    int NUM_MARKS ;
    int total;
    float average;
    int i;
    char response;

    total = 0;
    i = 0;

    do {
        cout << "Enter a mark: " ;
        cin >> examMARKS[i] ;
        total += examMARKS[i];
        i ++;
        cout << "More marks [Y/N]";
        cin >> response ;
    } while ((response == 'y' || response == 'Y') && i < MAX_MARKS);

    NUM_MARKS = i;
    average = float(total) / NUM_MARKS ;

    for (int i = 0; i < NUM_MARKS; i++) {
        if (examMARKS[i] > average) {
            cout << "The marks above average are: " << examMARKS[i] << endl;
        }
    }

    return 0;
}
