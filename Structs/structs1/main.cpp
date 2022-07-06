#include <iostream>

using namespace std;

// Intro to structs

struct Shirt {
    int size;
    char style;
    float price;

};

void inputData(Shirt & shirtP) {
    cout << "Enter the size of the shirt: " << endl;
    cin >> shirtP.size ;
    cout << "Enter the style of your shirt: " << endl;
    cin >> shirtP.style ;
    cout << "Enter the price of your shirt: " << endl;
    cin >> shirtP.price ;
}

void displayData(const Shirt & shirtP) {
    cout << "Shirt Info " << endl;
    cout << "========== " << endl ;
    cout << "Shirt size " << shirtP.size << endl;
    cout << "Shirt style " << shirtP.style << endl;
    cout << "Shirt price " << shirtP.price << endl;
}

int main()
{
    // create shirt obj
    Shirt shirt1;

    inputData(shirt1);
    displayData(shirt1);

    return 0;
}
