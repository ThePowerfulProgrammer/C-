#include <iostream>
#include <cmath>

using namespace std;

// used as a means to "return" 2 values
float returnValues(float a, float b) {
    cout << a << endl;
    return b;
}

// gets weight and height
float getData(float & weight, float & height) {
    cout << "Enter weight in kilos eg: 69.69 kgs" << endl;
    cin >> weight ;
    cout << "Enter height in m eg: 1.69m " << endl;
    cin >> height ;
    // a function can only return 1 VALUE --> Loophole return a function
    return returnValues(weight, height);

}

// calculates BMI using weight and height
void calcBMI(float weight, float height, float & BMI) {
    BMI = weight/pow(height, 2) ;
}

// shows information on screen
void displayFitnessResult(float BMI) {
    if (BMI <= 18.5) {
        cout << BMI << " underweight" << endl;
    }
     else if (BMI >= 18.5 && BMI <= 24.9) {
        cout << BMI << " healthy" << endl;
    }
    else if (BMI >= 25.0 && BMI < 29.9) {
        cout << BMI << " overweight " << endl;
    }
    else {
        cout << BMI << " obese" << endl;
    }
}

int main()
{
    float weight,height, BMI;
    cout << getData(weight, height) << endl;
    calcBMI(weight, height, BMI);
    cout << endl;
    displayFitnessResult(BMI);

    return 0;
}
