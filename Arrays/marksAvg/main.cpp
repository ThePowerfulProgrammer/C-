#include <iostream>
using namespace std;


int main()
{
    const int NUM_MARKS = 10;
    int examMarks[NUM_MARKS];
    int total;
    float average;

    total = 0 ;
    for(int i = 0;i<NUM_MARKS;i++) {
        cout << "Enter a mark: " ;
        cin >> examMarks[i];
        total += examMarks[i];
    }
    average = float(total) / NUM_MARKS ;

    cout << "The average is " << average << endl;

    cout << "The following marks are above average: " << endl;

    for (int i = 0; i < NUM_MARKS; i++) {
        if (examMarks[i] > average) {
            cout << examMarks[i] << endl;
        }
    }



    return 0;
}
