
#include <iostream>

using namespace std;

bool approvedApplication(int ageP, char sexP, string nameP, string courseP, float costP) {
    cout << "Yeet" << endl;
    return 1;
}

int main()
{
    string name,course;
    char sex;
    int age;
    float cost;
    bool approved;
    
    approved = approvedApplication(30, 'M', "Ash", "BCs", 120.0);

    if (approvedApplication(30, 'M', "Ash", "HIV", 120.0)) 
        cout << "Yes" << endl;

    return 0;
}
