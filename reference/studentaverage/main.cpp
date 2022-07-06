
#include <iostream>

using namespace std;

// reference paramters
void inputMarks(float & mark1P, float & mark2P, float & mark3P) {

    cout << "Enter three marks: " ;
    cin >> mark1P >> mark2P >> mark3P ;
}

// average
float average(float mark1P, float mark2P, float mark3P) {
    return (mark1P + mark2P + mark3P) / 3 ;
}


// average as void with reference parameters

void calcAverage(float & mark1P, float & mark2P, float & mark3P, float & averageP) {
    averageP = (mark1P + mark2P + mark3P) / 3 ;
}

// displayBest score 1 vs score 2
void displayBest(float averageAP, float averageBP) {
    float best = averageAP ;
    if (averageBP > averageAP) {
        best = averageBP;
    }
    
    cout << "The best average is: " << best << endl;
    
}


int main()
{
    // no values set, values will be set in inputMarks()
    float mark1,  mark2, mark3 ;
    // averages
    float  averageA, averageB ;

    inputMarks(mark1, mark2, mark3);
    averageA = average(mark1, mark2, mark3);

    inputMarks(mark1, mark2, mark3);
    averageB = average(mark1, mark2, mark3);

    displayBest(averageA, averageB);

    return 0;
}







