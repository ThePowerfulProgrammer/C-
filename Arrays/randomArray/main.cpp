#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int arraySize = 15;
    int myArray[arraySize];

    int next;

    srand(time(0));

    // Generate 15 random integers and append to array
    for (int i = 0; i < arraySize; i++) {
        next = rand () % 1000;
        myArray[i] = next;
    }

    cout << "My array = " <<myArray[0] << ", " << myArray[1] << ", " << myArray[2] << ", " << myArray[3] << ", " << myArray[4] ;
    cout << ", " << myArray[5] << ", " << myArray[6] << ", " << myArray[7] << ", " << myArray[8] << ", " << myArray[9] ;
    cout << ", " << myArray[10] << ", " << myArray[11] << ", " << myArray[12] << ", " << myArray[13] << ", " << myArray[14] ;


    return 0;
}
