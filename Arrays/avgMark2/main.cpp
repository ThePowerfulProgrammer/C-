#include <iostream>

using namespace std;

int main()
{
    int MAX_MARKS = 100;
    int NUM_MARKS ;
    int examMarks[MAX_MARKS];
    int total;
    float average;

    cout << "Enter number of marks: " ;
    cin >> NUM_MARKS;

    while (NUM_MARKS < 1 || NUM_MARKS > MAX_MARKS) {
        cout << "Enter a number between 1 and 100: " ;
        cin >> NUM_MARKS ;
    }

    total = 0;
    for (int i = 0; i < NUM_MARKS; i++) {
        cout << "Enter a mark: ";
        cin >> examMarks[i];
        total += examMarks[i];
    }


    average = total / NUM_MARKS;

    cout << average << endl;

    for (int i = 0; i<NUM_MARKS; i++) {
        if (examMarks[i] > average) {
            cout << "This mark was above average: " << examMarks[i] << endl;
        }
    }


    return 0;
}
