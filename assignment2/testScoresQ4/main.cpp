#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


// function 1
int getScore() {
    int testscore;
    cin >> testscore ;
    while (testscore < 0 || testscore > 100) {
        cout << "Error, re-enter testscore: " << endl;
        cin >> testscore ;
    }
    return testscore;
}

// function 2 --> Must be called within calcAverage()
int findLowest (int value1, int value2, int value3, int value4, int value5)
{
    return std::min({value1, value2, value3, value4, value5});
}

// function 3
float calcAverage(int value1, int value2, int value3, int value4, int value5) {
    int lowest = findLowest(value1, value2, value3, value4, value5);
    float sum = 0;
    float avg;

    sum = value1 + value2 + value3 + value4 + value5 - lowest; // ie: 1+2+3+4+5 - 1 = 2+3+4+5 ;

    avg = sum / 4 ;
    return avg;
}

// function 4
void displayOutput(float avgScore) {
    cout.setf(ios::fixed) ;
    cout.precision(2);
    std::setprecision(4);
    cout << "After dropping the lowest test score, the test average is " << avgScore << endl ;
}

int main()
{

    int value1;
    int value2;
    int value3;
    int value4;
    int value5;

    value1 = getScore();
    value2 = getScore();
    value3 = getScore();
    value4 = getScore();
    value5 = getScore();

    float avgScore ;

    avgScore = calcAverage(value1, value2, value3, value4, value5) ;
    displayOutput(avgScore);
    return 0;
}



























