#include <iostream>

using namespace std;
const int NUM_MARKS = 4;
const int NUM_STUDS = 10;


struct Student {
    string name, studNo;
    int marks[NUM_MARKS];
};

void inputData(Student & studentP) {
    float mark;
    cout << "Enter data for student name, studno and 4 marks: " << endl;
    getline(cin >> ws, studentP.name);
    cin >> studentP.studNo;
    for (int i = 0; i < NUM_MARKS; i++) {
        cout << "Enter mark: " ;
        cin >> mark;
        studentP.marks[i] = mark;
    }

}

void displayData(const Student & studentP) {
    cout << "Below is data for student name, student number and 4 test scores " << endl;
    cout << "Name "<< studentP.name << endl;
    cout << "Student number " << studentP.studNo << endl;
    for (int i = 0; i < NUM_MARKS; i++) {
        cout << "Test mark "<< i+1 << " "<< studentP.marks[i] << endl;
    }
}

float calculateAvg(Student & studentP) {
    float avg = 0;
    for (int i = 0; i < NUM_MARKS; i++) {
        avg += studentP.marks[i];
    }
    return  avg/4;
}

int main()
{
    Student students[NUM_STUDS];
    float averages[NUM_STUDS];
    float grandTotal = 0;

    // add info & sum mark total
    for (int i = 0; i < NUM_STUDS; i++){
        cout << "Student " << i << endl;
        inputData(students[i]);
        cout << endl;
        averages[i] =  calculateAvg(students[i]);
        grandTotal += averages[i];
    }

    // determine class AVG
    float classAvg;
    classAvg = grandTotal / NUM_STUDS;
    cout << "The class avg is " << classAvg << endl;
    cout << endl;

    // display student info if student avg > classAvg
    for (int i=0; i<NUM_STUDS;i++) {
        if (averages[i] > classAvg) {
            displayData(students[i]);
            cout << endl;
        }
    }


    cout << classAvg << endl;



    return 0;
}
