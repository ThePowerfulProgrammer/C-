#include <iostream>

using namespace std;

void toTime(int seconds) {
    int week_count = 0;
    int day_count = 0 ;
    int hour_count = 0 ;
    int minute_count = 0 ;
    int second_count = 0 ;

    int week_seconds = 604800;
    int day_seconds = 86400;
    int hour_seconds = 3600;
    int minute_seconds = 60 ;
    int second = 1 ;

    while (seconds) {
        if (seconds >= week_seconds) {

            seconds = seconds - week_seconds ;
            week_count += 1 ;
        }

        if (seconds < week_seconds) {
            if (seconds >= day_seconds) {
                day_count += 1;
                seconds = seconds - day_seconds ;
                cout << seconds << endl ;
            }
        }

        if (seconds < day_seconds) {
            if (seconds >= hour_seconds) {
                hour_count += 1;
                seconds = seconds - hour_seconds ;
            }
        }

        if (seconds < hour_seconds) {
            if (seconds >= minute_seconds) {
                minute_count += 1;
                seconds = seconds - minute_seconds ;
            }
        }

        if (seconds < minute_seconds) {
            if (seconds >= second) {
                second_count += 1 ;
                seconds = seconds - second ;
            }
        }


    }

    cout << "The number of weeks: " << week_count << endl ;
    cout << "The number of days: " << day_count << endl ;
    cout << "The number of hours: " << hour_count << endl ;
    cout << "The number of minutes: " << minute_count << endl ;
    cout << "The number of seconds: " << second_count << endl ;
}


int main()
{
    int seconds ;

    cout << "Enter number of seconds: " ;
    cin >> seconds ;

    toTime(seconds) ;

    cout << "End" << endl ;

    return 0;
}
