#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

  string Readedline;

  string CompleteTxt;

  ifstream filePointer1;

  // open file
  filePointer1.open("Inputfile.txt", ios::in );

  while(!filePointer1.eof())

  {

  getline(filePointer1,Readedline);

  CompleteTxt=CompleteTxt+Readedline+"\n";

  }

  filePointer1.close();

  ofstream filePointer2;

  filePointer2.open ("OutputFile.txt", ios::out );

  int txt_length=CompleteTxt.length();

  int index=0;

    while(index<=txt_length)
      {

      if((CompleteTxt[index]==' ')&&(CompleteTxt[index+1]==' '))

      { CompleteTxt.erase(index,1);

      continue;

      }

    index++;

     }

  filePointer2 << CompleteTxt;

  filePointer2.close();

  cout << "\nBlankspaces suceesfully removed from the source file";

  return 0;

}
