#include <iostream>
using namespace std;

int main()
{
    // Game to guess your final number

    int number = 40;
    int answer;
    cout << "Think of a number between 30-50. Write it down" << endl;
    cout << "Then do the following calculation on paper: " << endl << endl;
    cin.get();
    cout << "Double it" << endl;
    cin.get();
    answer = number * 2;
    cout << "Add 29 to this" << endl;
    cin.get();
    answer = answer + 29;
    cout << "Double the result again" << endl;
    cin.get();
    answer = answer * 2;
    cout << "Subtract the original number from your answer"<< endl;
    cin.get();
    answer = answer - number ;
    cout << "Divide the answer by your original number and throw away the remainder" << endl;
    cin.get();
    answer = answer / number;
    cout << "Your final answer is " << answer << endl;
    return 0;
}

