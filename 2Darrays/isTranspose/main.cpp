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


void checkIsTranspose(int matP[][N], int mat2P[2][N]) {
    // first show all entries in both matrices
    int checkA = 0;
    bool A = false;
    int checkB = 0;
    bool B = false;

    // check if T(a) == b
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matP[j][i] << "-" << mat2P[i][j] << "\t";
            if (matP[j][i] == mat2P[i][j]) {
                checkA += 1 ;
            }


        }
        cout << endl ;
    }
    cout << endl ;

    // check if T(b) == a
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matP[i][j] << "-" << mat2P[j][i] << "\t";
            if (matP[i][j] == mat2P[j][i]) {
                checkB += 1;
            }

        }
        cout << endl ;
    }

    if (checkA == N*N) {
        cout << true << " For matrix A" << endl ;
    }
    if (checkB == N*N) {
        cout << true << " For matrix B" << endl ;
    }


}

int main()
{
    int mat[][N] = {{1,2,1,2}, {3,4,3,4}, {5,6,5,6}, {7,8,7,8}};
    int mat2[][N] = {{1,3,5,7}, {2,4,6,8}, {1,3,5,7}, {2,4,6,8}};

    cout << "\t MATRIX \t" << endl ;

    checkIsTranspose(mat, mat2);




    return 0;
}
