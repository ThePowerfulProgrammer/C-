#include <iostream>
using namespace std;

// a)
class Marks {
    public:
        Marks();
        Marks(string name, string number, int asg1, int asg2, int asg3, double test);
        double calcMark() const;
    private:
        string stdtName;
        string stdNumber;
        int assignments[3];
        double testMark;
};

Marks::Marks() {
    stdtName = "Ash";
    stdNumber = "11552851";
    assignments[0] = 30;
    assignments[1] = 30;
    assignments[2] = 30;
    testMark = 50;
}

Marks::Marks(string name, string number, int asg1, int asg2, int asg3, double test) {
    stdtName = name;
    stdNumber = number;
    assignments[0] = asg1;
    assignments[1] = asg2;
    assignments[2] = asg3;
    testMark = test;
}

double Marks::calcMark() const {
    return testMark;
}

// b)
class FinalMark: public Marks {
    public:
        FinalMark();
        FinalMark(string name, string number, int asg1, int asg2, int asg3, double test, double exam);
        int calcMark() ; // listed because we intend to overload calcMark
        string getName();
        string getNumber();
    private:
        string stdtName;
        string stdNumber;
        int assignments[3];
        double testMark;
        double examMark; // Additional variable examMark
};

string FinalMark::getName() {
    return stdtName;
}

string FinalMark::getNumber() {
    return stdNumber;
}

// c)
FinalMark::FinalMark() : Marks() {
    stdtName = "Azura";
    stdNumber = "11552888";
    assignments[0] = 30;
    assignments[1] = 30;
    assignments[2] = 30;
    testMark = 50;
    examMark = 65;
}

FinalMark::FinalMark(string name, string number, int asg1, int asg2, int asg3, double test, double exam)
: Marks(name, number, asg1, asg2, asg3,test) {
    examMark = exam;
}

// d)
int FinalMark::calcMark() {
    int assignmentWeight = ((assignments[0] + assignments[1] + assignments[2]) / 3) * 0.1;

    return int(assignmentWeight + (testMark * 0.2) + (examMark * 0.7) );
}


int main()
{
    // e)
    FinalMark myMark;

    cout << "Mark received: " << myMark.Marks::calcMark() << " Student name: "<<
    myMark.getName() << " Student number: " <<
    myMark.getNumber() << endl;
    cout << endl;
    cout << "Mark received: " << myMark.calcMark() << " Student name: "<<
    myMark.getName() << " Student number: " <<
    myMark.getNumber() << endl;
    return 0;
}
