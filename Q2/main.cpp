#include <iostream>

using namespace std;

class A
{
    // private to all expect within class
    private:
        int x;
    // inherited by children
    protected:
        int getX();
    public:
        void setX();
};

// issue
int A::getX() {
    return x;
}

void A::setX() {
    x=10;
}

//------------------------------------------------
class B
{
    private:
        int y;
    protected:
        A objA;
        int getY();
    public:
        void setY();
};

void B::setY() {
    y=24;
    // issue int a = objA.getX();
}

//-----------------------------------------------
class C: public A
{
    protected:
        int z;
    public:
        int getZ();
        void setZ();
};

int C::getZ() {
    return z;
}

void C::setZ() {
    z=65;
}

int main()
{
    A a1;
    a1.getX();
    cout << "Hello world!" << endl;
    return 0;
}
