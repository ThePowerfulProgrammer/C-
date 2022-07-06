/*
Reads three numbers from the file infile.dat, sums the numbers,
and writes the sum to the file outfile.dat
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream Instream;
    ofstream Outstream;

    Instream.open("infile.dat");
    if (Instream.fail()) {
        cout << "Input file failed opening \n" << endl;
        exit(1);
    }
    Outstream.open("outfile.dat");
    if (Outstream.fail()) {
        cout << "Output file failed opening \n" << endl;
        exit(1);
    }
    int first, second, third;
    Instream >> first >> second >> third;
    Outstream << "The sum of the first 3\n"
    << "numbers in infile.dat\n"
    << "is " << (first + second + third)
    << endl;
    Instream.close( );
    Outstream.close( );

    return 0;
}
