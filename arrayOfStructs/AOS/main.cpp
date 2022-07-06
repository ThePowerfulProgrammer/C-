#include <iostream>

using namespace std;
const int NUM_MARKS = 4;

struct Student {
    string name, studNo;
    int marks[NUM_MARKS];
};

void inputData(Student & studentP) {
    float mark;
    cout << "Enter data for student name, studno and 4 marks: " << endl;
    getline(cin,studentP.name);
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
    cout << "average mark = ";
    return  avg/4;
}

int main()
{
    Student student1;
    inputData(student1);
    cout << endl;
    displayData(student1);
    cout << endl;
    cout << calculateAvg(student1);

    return 0;
}
