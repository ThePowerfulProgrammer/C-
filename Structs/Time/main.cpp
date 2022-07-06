#include <iostream>

using namespace std;

struct Time {
    int hours, minutes, seconds;
};

/*
Write a void function changeTime that receives two parameters: timeP of type Time and interval of type
int (where interval is a number of seconds). The function must change the values of the fields in timeP
by adding interval to them
*/
void changeTime(Time & timeP,int interval) {
    int totalTime;
    totalTime = (timeP.hours*3600 + timeP.minutes*60 + timeP.seconds) + interval;
    timeP.hours = totalTime / 3600;
    cout << timeP.hours << " Hour/s" << endl;
    totalTime = totalTime - (timeP.hours*3600);
    timeP.minutes = totalTime / 60;
    cout << timeP.minutes << " minutes" << endl;
    totalTime = totalTime - (timeP.minutes*60);
    timeP.seconds = totalTime;
    cout << timeP.seconds << " seconds" << endl;
}

int main()
{
    Time time1;
    time1.hours = 1;
    time1.minutes = 30;
    time1.seconds = 10;

    changeTime(time1, 80);

    return 0;
}
