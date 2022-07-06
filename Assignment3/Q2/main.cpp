#include <iostream>

using namespace std;

// Find lowest
float findLowest(float mark1,float mark2,float mark3,float mark4,float mark5,float mark6) {
    float Min = mark1;
    //(100,90,90,80,55)
    if (mark2 <= mark1 && mark2 <= mark3 && mark2 <= mark4 && mark2 <= mark5 && mark2 <= mark6) {
        Min = mark2;
    }
    if (mark3 <= mark1 && mark3 <= mark2 && mark3 <= mark4 && mark3 <= mark5 && mark3 <= mark6) {
        Min = mark3;
    }
    if (mark4 <= mark1 && mark4 <= mark2 && mark4 <= mark3 && mark4 <= mark5 && mark4 <= mark6) {
        Min = mark4;
    }
    if (mark5 <= mark1 && mark5 <= mark2 && mark5 <= mark3 && mark5 <= mark4 && mark5 <= mark6) {
        Min = mark5;
    }
    if (mark6 <= mark1 && mark6 <= mark2 && mark6 <= mark3 && mark6 <= mark4 && mark6 <= mark5) {
        Min = mark6;
    }
    return Min;
}

// Find highest
float findHighest(float mark1,float mark2,float mark3,float mark4,float mark5,float mark6) {
    float Max = mark1;
    //(100,90,90,80,55)
    if (mark2 >= mark1 && mark2 >= mark3 && mark2 >= mark4 && mark2 >= mark5 && mark2 >= mark6) {
        Max = mark2;
    }
    if (mark3 >= mark1 && mark3 >= mark2 && mark3 >= mark4 && mark3 >= mark5 && mark3 >= mark6) {
        Max = mark3;
    }
    if (mark4 >= mark1 && mark4 >= mark2 && mark4 >= mark3 && mark4 >= mark5 && mark4 >= mark6) {
        Max = mark4;
    }
    if (mark5 >= mark1 && mark5 >= mark2 && mark5 >= mark3 && mark5 >= mark4 && mark5 >= mark6) {
        Max = mark5;
    }
    if (mark6 >= mark1 && mark6 >= mark2 && mark6 >= mark3 && mark6 >= mark4 && mark6 >= mark5) {
        Max = mark6;
    }
    return Max;
}

// function used to get student details
void studentDetails(string & name, string & surname, string & schoolName) {
    cout  << "Please key in your name: " << endl;
    cin >> name >> surname;
    cout << "Please key in the name of your school: " << endl;
    getline(cin >> ws, schoolName);
    cout << endl;
}

// function to get 6 marks, Validates mark
void getMarks(float & mark1,float & mark2, float & mark3, float & mark4, float & mark5, float & mark6) {
    float mark;
    for (int i = 0; i < 6; i++) {
        switch (i) {
            case 0:
            cout << "Key in your mark for English" << endl;
            break;
            case 1:
            cout << "Key in your mark for Mathematics" << endl;
            break;
            case 2:
            cout << "Key in your mark for Life Orientation" << endl;
            break;
            case 3:
            cout << "Key in your mark for History" << endl;
            break;
            case 4:
            cout << "Key in your mark for Computer Literacy" << endl;
            break;
            case 5:
            cout << "Key in your mark for Geography" << endl;
            break;
        }

        cin >> mark;
        while (mark < 0 || mark > 100) {
            cout << "Mark must be in between 0 and 100 " << endl;
            cin >> mark;
        }
        switch (i) {
        case 0:
            mark1 = mark;
            break;
        case 1:
            mark2 = mark;
            break;
        case 2:
            mark3 = mark;
            break;
        case 3:
            mark4 = mark;
            break;
        case 4:
            mark5 = mark;
            break;
        case 5:
            mark6 = mark;
            break;
        }
    }
    cout << endl;
    cout << endl;
}

// function calculates and returns lowest and highest marks
float minMax(float mark1,float mark2,float mark3,float mark4,float mark5,float mark6) {
    float Min = findLowest(mark1,mark2,mark3,mark4,mark5,mark6);
    float Max = findHighest(mark1,mark2,mark3,mark4,mark5,mark6);
    // used to return highest
    cout << "Your highest mark was" << endl;
    // return lowest
    cout << Max << "%  Your lowest mark was "<< endl;
    return Min;
}

// called once by main
void calcAverageYearMark(float mark1,float mark2,float mark3,float mark4,float mark5,float mark6, float & avg) {
    avg = (mark1 + mark2 + mark3 + mark4 + mark5 + mark6) / 6;
}


// Student pass or fail
void passOrFail(float mark1,float mark2,float mark3,float mark4,float mark5,float mark6) {
    int subjectFailCount = 0;
    /*
        pass combinations
        pass = (50,50,50,50,50,50) || (50,50,50,50,50,0) || (50,50,50,50,0,0)
        fail = (50,50,50,0,0,0) -> ANY THREE Subjects < 50
        -> FROM DEDUCTION, IF 3 MARKS < 50 -> FAIL
    */
    // mark1 = english
    if (mark1 >= 50) {
        if (mark2 < 50) {subjectFailCount +=1;}
        if (mark3 < 50) {subjectFailCount +=1;}
        if (mark4 < 50) {subjectFailCount +=1;}
        if (mark5 < 50) {subjectFailCount +=1;}
        if (mark6 < 50) {subjectFailCount +=1;}

        if (subjectFailCount >= 3) {cout << "You have failed" << endl;}
        else {
            cout << "Passed" << endl;
        }
    }

    else {
        cout << "Failed" << endl;
    }
}

// function created but never used --> Determins if distinction
void awardDistinction(float mark1,float mark2,float mark3,float mark4,float mark5,float mark6, float avgMark) {
    string English, Mathematics, LO,History, Computerliteracy, Geography, avg;
    if (mark1 >= 75) {English = "Distinction";}
    if (mark2 >= 75) {Mathematics = "Distinction";}
    if (mark3 >= 75) {LO = "Distinction";}
    if (mark4 >= 75) {History = "Distinction";}
    if (mark5 >= 75) {Computerliteracy = "Distinction";}
    if (mark6 >= 75) {Geography = "Distinction";}
    if (avgMark >= 75) {avg = "Distinction";}
}


// handle calculations for codeSymbol()
void codeSymbolHelper(float mark, string & symbol, int & code, bool Hide=false) {
    if (mark >= 80) {
            if (!Hide) {
                cout << mark << "\t" << "7 \t" << "A" << endl;
            }
        symbol = "A";
        code = 7;
    }
    if (mark >= 70 && mark <= 79) {
            if (!Hide) {
                cout << mark << "\t" << "6 \t" << "B" << endl;
            }
        symbol = "B";
        code = 6;
    }
    if (mark >= 60 && mark <= 69) {
            if (!Hide) {
                cout << mark << "\t" << "5 \t" << "C" << endl;
            }
        symbol = "C";
        code = 5;
    }
    if (mark >= 50 && mark <= 59) {
            if (!Hide) {
                cout << mark << "\t" << "4 \t" << "D" << endl;
            }
        symbol = "D";
        code = 4;
    }
    if (mark >= 40 && mark <= 49) {
            if (!Hide) {
                cout << mark << "\t" << "3 \t" << "E" << endl;
            }
        symbol = "E";
        code = 3;
    }
    if (mark >= 30 && mark <= 39) {
            if (!Hide) {
                cout << mark << "\t" << "2 \t" << "F" << endl;
            }
        symbol = "F";
        code = 2;
    }
    if (mark >= 0 && mark <= 29) {
            if (!Hide) {
                cout << mark << "\t" << "1 \t" << "FF" << endl;
            }
        symbol = "FF";
        code = 1;
    }
}

// Actual function calls codeSymbolHelper()
void codeSymbol(float mark1,float mark2,float mark3,float mark4,float mark5,float mark6, float avgMark,string & symbol, int & code) {
    cout << "Subject \t  " << "Mark \t" << "Symbol \t" << "Code" << endl;
    cout << "English           ";
    codeSymbolHelper(mark1,symbol,code);
    cout << "Mathematics       ";
    codeSymbolHelper(mark2,symbol,code);
    cout << "Life Orientation  ";
    codeSymbolHelper(mark3,symbol,code);
    cout << "History           ";
    codeSymbolHelper(mark4,symbol,code);
    cout << "Computer Literacy ";
    codeSymbolHelper(mark5,symbol,code);
    cout << "Geography         ";
    codeSymbolHelper(mark6,symbol,code);
    cout << "                  "; // Calculates symbol and code for avg but does not present to screen
    codeSymbolHelper(avgMark,symbol,code,true);
}

// function to display report card
void studentAcademicRecord(string name, string surname, string schoolName,float mark1,float mark2,float mark3,float mark4,float mark5,float mark6, float avgMark, string symbol, int code) {
    cout << "***********************************************" << endl;
    cout << "**** STUDENT ACADEMIC RECORD" << endl;
    cout << "This program inputs the learner marks of matric" << endl;
    cout << "level subjects and prints the student final report." << endl;
    cout << "***********************************************" << endl;
    cout << "***********************************************" << endl << endl;
    cout << "Name: " << name << " "<< surname << "\tSchool: " << schoolName << endl << endl;
    codeSymbol(mark1,mark2,mark3,mark4,mark5,mark6,avgMark,symbol,code);
    cout << endl;
    cout << "Average Year Mark: " << avgMark << " with Symbol "<< symbol << " and code " << code << endl;
    cout << "Outcome:  ";
    passOrFail(mark1,mark2,mark3,mark4,mark5,mark6);
    cout << endl;
    cout << minMax(mark1,mark2,mark3,mark4,mark5,mark6);
    cout << "% "<< endl;
    cout << "**********************************************" << endl;
}

int main()
{
    // English, Mathematics, Life Orientation, History, Computer literacy, Geography
    float Eng,Math,LO, His,CL,Geog, average;
    string name,surname,schoolName;
    float avgMark;
    string symbol;
    int code;


    studentDetails(name,surname,schoolName);
    getMarks(Eng,Math,LO,His,CL,Geog);
    calcAverageYearMark(Eng,Math,LO,His,CL,Geog, average);
    studentAcademicRecord(name,surname,schoolName,Eng,Math,LO,His,CL,Geog,average,symbol,code);

    return 0;
}
