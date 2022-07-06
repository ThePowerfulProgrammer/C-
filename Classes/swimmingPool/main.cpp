#include <iostream>

using namespace std;

class SwimmingPool
{
    public:
        SwimmingPool(int l, int w, int d, int s);
        int volume( ) const;
    private:
        int length, width, deepDepth, shallowDepth;
};

SwimmingPool::SwimmingPool(int l, int w, int d, int s)
{
    length = l;
    width = w;
    deepDepth = d;
    shallowDepth = s;
}

int SwimmingPool::volume() const {
    float avgD = (deepDepth + shallowDepth) /  2;
    // Length x width x depth x 7.5 = volume (in gallons)
    cout << "Volume of pool is  " << (length*width*avgD * 7.5) << " cubic meters " << endl;
}


int main()
{
    int l,w,dD,sD;

    cout << "Enter values for length, width , deepDepth and shallowDepth" << endl;
    cin >> l;
    cin >> w;
    cin >> dD;
    cin >> sD;

    SwimmingPool pool(l,w,dD,sD);
    pool.volume();


    return 0;
}
