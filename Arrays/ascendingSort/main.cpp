
#include <iostream>

using namespace std;

int main()
{
    // sorting algorithm using SWITCH to sort array

    int myArray[10] = {2,4,1,10,50,8,0,60,100,12} ;

    for (int j = 0; j < 10 ; j++) {
        for (int i = 0 ; i < 10; i++) {
            int temp;
            if (myArray[i] > myArray[i+1]) {
                temp = myArray[i];
                myArray[i] = myArray[i+1];
                myArray[i+1] = temp;
            }
        }
    }

    cout << "My array = " << myArray[0] << ", " << myArray[1] << ", " << myArray[2] << ", " << myArray[3] << ", " << myArray[4] ;
    cout << ", " << myArray[5] << ", " << myArray[6] << ", " << myArray[7] << ", " << myArray[8] << ", " << myArray[9] << endl ;



    return 0;
}
