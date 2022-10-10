
#include <iostream>

using namespace std;

int main()
{
    const int ROWSIZE = 4, COLSIZE = 4;
    int tricky = 0;

    int play1[ROWSIZE][COLSIZE] = {{1,5,3,7}, {6,8,5,8}, {3,3,3,5}, {7,8,1,5}};
    int play2[ROWSIZE][COLSIZE] = {{4,6,3,7}, {5,0,7,8}, {8,7,6,5}, {7,3,4,5}};

    // row loop
    for (int row = 0; row < ROWSIZE; row++) {
        // column loop
        for (int column = 0; column < COLSIZE; column++) {
            //cout << "play1-> " << play1[row][column] << " play2-> " << play2[row][column] << endl; 
            
            if (play1[row][column] != play2[row][column]) {
                tricky += (play1[row][column] + play2[row][column]);
                //cout << "Tricky current var: " << tricky << endl;
            
            } 
            else {
                tricky += play1[row][column];
                //cout << "Tricky current var: " << tricky << endl;
            }
        }
    }
    cout << tricky << endl;
    return 0;
}
