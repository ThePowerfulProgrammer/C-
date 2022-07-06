#include <iostream>

using namespace std;

/*
 The following information must be stored for each kind of item: description, number
produced, number sold, and the difference between the number produced and the number sold. The data
for all the items must be stored in an array. The maximum number of kinds of items is 100. The program
should output a clear report indicating the items for which production exceeded sales. The program may
input the number of kinds of items that must be processed from the keyboard.
*/

const int MAX_NUM = 100;

struct Item {
    string description;
    int number_produced;
    int number_sold;
    int stock_rem;
};

void inputData(Item & itemP) {
    cout << "Enter item description, production, sold and amount remaining " << endl;
    getline(cin >> ws, itemP.description);
    cin >> itemP.number_produced ;
    cin >> itemP.number_sold ;
    itemP.stock_rem = itemP.number_produced - itemP.number_sold;
}

void displayInfo(Item & itemP) {
    cout << itemP.description << endl;
    cout << itemP.number_produced << endl;
    cout << itemP.number_sold << endl;
    cout << "Production exceeds sales" << endl;
    cout << itemP.stock_rem << endl;
}

int main()
{
    Item items[MAX_NUM];

    // Create some Items
    for (int i = 0; i < 3; i++) {
        inputData(items[i]) ;
        cout << endl;
    }
    // If production > sales
    for (int j = 0; j<3;j++) {
        if (items[j].number_sold < items[j].number_produced) {
            displayInfo(items[j]);
            cout << endl;
        }
    }
    return 0;
}
