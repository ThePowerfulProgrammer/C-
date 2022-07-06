
#include <iostream>

using namespace std;

// reference paramters
void inputMarks(float & mark1P, float & mark2P, float & mark3P, float & mark4P) {

    cout << "Enter four marks: " ;
    cin >> mark1P >> mark2P >> mark3P >> mark4P ;
}

// average
float average(float mark1P, float mark2P, float mark3P, float mark4P) {
    return (mark1P + mark2P + mark3P + mark4P) / 4 ;
}


// average as void with reference parameters

void calcAverage(float & mark1P, float & mark2P, float & mark3P, float & mark4P,float & averageP) {
    averageP = (mark1P + mark2P + mark3P + mark4P) / 4 ;
}

// displayBest score 1 vs score 2
void displayBest(float averageAP, float averageBP, float averageCP) {
    float best = averageAP ;

    if (averageBP > averageAP) {
        best = averageBP;
        if (averageCP > averageBP) {
            best = averageCP;
        }
    }


    cout << "The best average is: " << best << endl;

}

// main function --> Average of 4 marks for 3 students

int main()
{
    // no values set, values will be set in inputMarks()
    float mark1,  mark2, mark3, mark4 ;
    // averages
    float  averageA, averageB, averageC ;

    inputMarks(mark1, mark2, mark3, mark4);
    averageA = average(mark1, mark2, mark3, mark4);

    inputMarks(mark1, mark2, mark3, mark4);
    averageB = average(mark1, mark2, mark3, mark4);

    inputMarks(mark1, mark2, mark3, mark4);
    averageC = average(mark1, mark2, mark3, mark4);

    displayBest(averageA, averageB, averageC);

    return 0;
}







