#include <iostream>
#include <string>

using namespace std;



string reversed(string x) {
    string reversed = "";
    for (int i = x.size(); i > -1; i--) {
        reversed =  reversed + x[i-1];
    }
    return reversed;
}

int main()
{
    cout << reversed("Ashish");
    return 0;
}
