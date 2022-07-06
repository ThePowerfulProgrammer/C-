#include <iostream>

using namespace std;
const int NUM_MARKS = 4;
const int NUM_STUDS = 10;

/*
A certain class has 10 students. Each student has a name and student number, and marks that were awarded
for 4 assignments.
Write a program that inputs the names, student numbers and 4 marks for each of the 10 students, calculates
the average mark for each student and then the average for the class as a whole. Display the information of
all the students with an above average mark.
*/


class Student {
    public:
        void inputData();
        void displayData();
        float calculateAvg();
    private:
        string name;
        string stdNo;
        int marks[NUM_MARKS];
};

int main()
{
    cout << '\a' << endl;
    return 0;
}
