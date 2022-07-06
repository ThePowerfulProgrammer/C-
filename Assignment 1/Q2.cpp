#include <iostream>

using namespace std;

int main()
{
    // initilise variables
    int nrPupils = 56 ;
    int nrGroups ;
    int nrLeft ;
    int groupSize ;
    
    
    // Ask for group size
    cout << "Please enter the size of each group " ;
    cin >> groupSize ;

    // set nrGroups and nrLeft if any    
    nrGroups = nrPupils / groupSize ;
    nrLeft = nrPupils % groupSize ;
    
    cout << "There are " << nrGroups << " groups consisting of " << groupSize << " pupils " ;
    cout << "There are " << nrLeft << " remaining pupils" << endl ;
    
    
    

    
    
    return 0;
}
