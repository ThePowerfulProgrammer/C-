#include <iostream>

using namespace std;

int main()
{
    // Requirements mark >= 50% and programRuns >= 5
    // Therefore stop at 50 , programRuns > 5

    int programsDone = 0 ;
    int result = 0 ;


    // start loop which will run a total of 50 times, both programsDone and result = 50
    while (programsDone < 5 || result < 50 ) {

        // increment by 1
        programsDone += 1 ;
        result += 1 ;

        // check 50 loops
       // cout << result << endl;

    }


    cout << "Congrats!, You can now proceed to the next exercise" << endl;

    return 0;
}
