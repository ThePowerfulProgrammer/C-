
#include <iostream>

using namespace std;

int main()
{
    const float SUNDAY = 200; // salary per day for sundays const
    float OTHER = 100; // salary per day for other days
    char whichDay; // ’2’ for Sundays, ‘1’ for other days
    float totalAmount; // total salary
    int nrSundays; // number of Sundays worked
    
    cout << "Enter first day:‘2’ for Sunday, ‘1’ for other days" << endl; 
    
    // my stuff
    nrSundays = 0;
    totalAmount = 0;
    cout << "Enter which day your employee worked: " << endl;
    do {
        cin >> whichDay ;
        switch (whichDay) {
            case '1':
                totalAmount += OTHER;
        
                break;
            case '2':
                totalAmount += SUNDAY;
                nrSundays +=1;
                break;
        }
        cout << endl;
    } while (whichDay != 'x');
    
    cout << "Number sundays " << nrSundays << " Total amount payable " << totalAmount << endl;


    return 0;
}
