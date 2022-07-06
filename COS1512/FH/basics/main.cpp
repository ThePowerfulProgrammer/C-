#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char arr[100];

    cout << "Enter your name and age: " << endl;
    cin.getline(arr,100);

    // creates an external file
    ofstream myfile("myfile.txt", ios::app); // base mode = write ios::append
    // write to file
    myfile << arr << " " ;
    myfile.close();

    cout << "File write operation performed succesfully " << endl << endl;

    // reading an external file
    cout << "Reading from file operation " << endl;
    // array to store data from file
    char arr1[100];
    ifstream obj("myfile.txt");
    obj.getline(arr1,100);
    cout << arr1;

    return 0;
}
