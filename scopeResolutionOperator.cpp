#include <iostream>
using namespace std;


class Myobj {
    public:
        void setValues(int value1, int value2);
        // scope resolution operator function variable
        void showObj();
    private:
        int x;
        int y;
    
};

// scope resolution operator allows us to gain access outside the class definition. as if it were within the class definition.
void Myobj::setValues(int num1, int num2) {
    x = num1;
    y = num2;
}


// scope resolution operator full function definition
void Myobj::showObj() {
    cout << "  x   "<< x <<  "  y  " << y << endl;
}

int main()
{
    Myobj obj1;
    obj1.setValues(4,9);

    obj1.showObj();

    return 0;
}


