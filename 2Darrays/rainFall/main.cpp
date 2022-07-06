#include <iostream>

using namespace std;

const int N = 12;

void showData(int array[][N]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < N; j++) {
            cout << array[i][j] << "\t" ;
        }
        cout << endl ;
    }
}


void annualRainfall(int array[][N]) {
    float sum = 0 ;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < N; j++) {
            sum += array[i][j] ;
        }
        cout << sum/5 << " mm yearly";
        sum = 0 ;
        cout << endl ;
    }
}

void monthlyRainFall(int array[][N]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < N; j++) {
            sum += array[i][j] ;
        }
        cout << sum/12 << " mm monthly";
        sum = 0 ;
        cout << endl ;
    }
}

void highestRainFall(int array[][N]) {
    int sum = 0;
    float highest = sum ;
    int year = 0;
    int month = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < N; j++) {
             ;
            if (array[i][j] > highest) {
                highest = array[i][j];
                year = i;
                month = j;
            }
        }



    }
    cout << highest << endl;
    cout <<"Year: " << year << endl;
    cout << "Month: " << month << endl;

}

int main()
{
    int rainfallMeasurements[][N] = {{4,5,58,94,19,1,32,29,2,86,90,8}, {8,56,50,54,0,92,11,93,66,68,78,76}, {37,81,50,17,48,66,29,83,71,86,43,95}, {38,34,8,64,29,86,65,52,91,7,30,74}, {54,85,39,1,47,95,49,61,18,20,88,63}};


    //annualRainfall(rainfallMeasurements);
    //monthlyRainFall(rainfallMeasurements);
    highestRainFall(rainfallMeasurements);

    return 0;
}
