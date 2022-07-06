// An annoying assignment Question :>)
// assumes BabyNames.dat doesnt contain data
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct BabyNames
{

 int rank;
 string name;
 string gender;

}
// Global
names[100];

int main()
{

    char input_gender,input_letter;

    //Reading the file
    // Getting user input

    cout<<"\nEnter 'b' for boy baby and 'g' for Girl baby :";

    cin>>input_gender;

    cout<<"\nEnter the letter with which the Name should start :";

    cin>>input_letter;

    ifstream file1;

    file1.open("BabyNames.dat");

    string r_rank,r_name,r_gender;

    int i=0;

    while(file1)

    {  file1 >> r_rank>>r_name>>r_gender;

      if((r_name[0]==input_letter)&& (r_gender[0]==input_gender))

      {

      names[i].rank=stoi(r_rank);

      names[i].name=r_name;

      names[i].gender=r_gender;

      i++;

      }

    }

    int N=i;

    // open  file and present data
    ofstream file2;

    file2.open("UserSelection.dat");

    for(int i=0;i<=N;i++)

    {

    file2 << names[i].rank << " " << names[i].name << "\n";

    }

return 0;

}
