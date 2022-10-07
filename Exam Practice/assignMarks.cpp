#include <iostream>
#include <string>

using namespace std; 

float calcMark(float assignMarksP[]) 
{
    float yearMark = 0;
    // reassign value of 100% to marks
    assignMarksP[0] = assignMarksP[0] * 0.3;
    assignMarksP[1] = assignMarksP[1] * 0.4;
    assignMarksP[2] = assignMarksP[2] * 0.3;

    // add marks to yearMark
    for (int assign = 0; assign<3; assign +=1) {
        cout << assignMarksP[assign] << endl;
        yearMark += assignMarksP[assign];
    }
    return yearMark;
}

void calcModuleMark(float finalYearMarkP, float examMarkP, float & moduleMark) 
{
    examMarkP = examMarkP * 0.8;
    finalYearMarkP = finalYearMarkP * 0.2;
    moduleMark = examMarkP + finalYearMarkP;
}

int main() 
{
    int numAssign;
    float finalYearMark, examMark = 60.0, moduleMark = 0.0;
    float assignMarks[] = {50,65,70};
    string outcome;
    
    finalYearMark = calcMark(assignMarks);
    calcModuleMark(finalYearMark, examMark, moduleMark);
    
    if (moduleMark >= 50) 
        outcome = " Passed ";
    else 
        outcome = " Failed ";
    
    cout << "The semester mark for the assignments is "
         <<  finalYearMark << endl;
    cout << "The exam mark is " << examMark << endl;
    cout << "The student's mark for the module is " 
         << moduleMark << ". The student has" << outcome << endl;

    return 0;
}
