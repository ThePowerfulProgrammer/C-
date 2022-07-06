#include <iostream>

using namespace std;


void getData(int & height, int & width, int & length) {
    cout << "Enter values for height, width and length: " << endl;
    cin >> height >> width >> length ;
}


int calculateVolume(int height, int width, int length) {
    int volume  = height * width * length;
    return volume;
}


void displayOutput(int height, int width, int length, int volume) {
    cout << "The volume of a room with height " << height << ", width " << width  <<
     " and length " << length << " is " << volume << "." ;
}


int main()
{
    int theHeight;
    int theWidth;
    int theLength;

    for (int i=0; i < 5; i++) {
        getData(theHeight, theWidth, theLength);
        int volume = calculateVolume(theHeight, theWidth, theLength);


        if (volume < 100) {
            displayOutput(theHeight, theWidth, theLength, volume);
            cout << " Size: Small" << endl;
        } else if (volume >= 100 && volume <= 500) {
            displayOutput(theHeight, theWidth, theLength, volume);
            cout << " Size: Medium" << endl;
        } else {
            displayOutput(theHeight, theWidth, theLength, volume);
            cout << " Size: Large" << endl;
        }
        cout << endl;
        cout << endl;
    }

    return 0;
}
