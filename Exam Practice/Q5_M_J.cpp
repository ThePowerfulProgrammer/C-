
#include <iostream>

using namespace std;

struct Item 
{
    string description; // eg: "Bath"
    string code; // used to distinguish decscriptions of varying design
    string color; // color of item
    float price; // price of item
};

int main()
{
    Item i1;
    Item i2;
    Item i3;
    i1.description = "bath";
    i2.description = "shower";
    i3.description = "bath";
    i1.color = "white";
    i2.color = "white";
    i3.color = "white";
    i1.code = "112233";
    i2.code = "112244";
    i3.code = "112255";
    
    Item stock[3] = {i1,i2,i3};
    
    int total;
    total = 0;
    
    for (int i = 0;i<3;i++) {
        if ((stock[i].description == "bath" && stock[i].color == "white")) {
            cout << stock[i].code << endl;
            total ++;
        }
    }
    cout << total ;

    return 0;
}
