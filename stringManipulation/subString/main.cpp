// Rearrange the title of a book
#include <iostream>
#include <string>

using namespace std;

int main( )
{
    string title, newTitle;
    cout << "Enter the title of a book: ";
    getline(cin, title);
    if (title.substr(0,4) == "The ")
    {
        newTitle = title.substr(4) + ", The";
        cout << "The new title is: " << newTitle << endl;
    }
    else
        cout << "Title unchanged" << endl;
    return 0;
}
