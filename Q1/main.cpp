#include <iostream>

using namespace std;

// recursive function
void count(int counter)
{
    if (counter == 0) {
        return ;
    } else {
        cout << "Calling counter (" << counter << ")" << endl;
        // -1 from counter
        count(--counter);
        // print stuff out
        cout << "counter(" << counter << ") processed " << endl;
        return;
    }
}


int main()
{
    int i = 3;
    count(i);
    return 0;
}
