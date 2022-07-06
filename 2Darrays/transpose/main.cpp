//Transpose a matrix
#include <iostream>
#include <algorithm>    // std::swap
using namespace std;
const int N = 4; // N = num of elements in each array


//Display the contents of a matrix on the screen
void showMatrix(const int matP[][N])
{
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++) {
            cout << matP[i][j] << "\t";
        }
        cout << endl;
    }
}

//Transpose the matrix
void transpose(int matP[][N]){
    // [1][2] = [2][1]
    for (int i = 0; i < N-1; i++)
        for (int j = i+1 ; j < N; j++)
            swap(matP[i][j], matP[j][i]);
}


int main()
{
    // create a 2d matrix
    int mat[][N] = {{1,2,1,2}, {3,4,3,4}, {5,6,5,6}, {7,8,7,8}};
    /*
    The size of the first is determined implicitly from the number of rows specified in the initialisation
    list, but C++ can’t determine the size of the second from the initialisation list (don’t ask why!) so you have
    to specify it. Strange but true
    */

    cout << "\t MATRIX \t" << endl ;

    showMatrix(mat);

    cout << "\t transpose \t" << endl ;
    transpose(mat);
    showMatrix(mat) ;


    return 0;
}
