#include <iostream>
using namespace std;
int main()
{
    
// BASICS variables needed
const int NR_VOTING_STATIONS = 4;
int votesForA, votesForB, votesForC, spoiltVotes;
char vote;

// initialise totals
votesForA = 0;
votesForB = 0;
votesForC = 0;
spoiltVotes = 0;

//initialise votes!

vote = '0';

// loop over the voting stations
for (int i = 1 ; i <= NR_VOTING_STATIONS ; i++ )
{
	// loop over voters
	while (vote != 'X')
	{
		cout <<"Enter your voting Choice A,B,C: ";
		cin >> vote;

//IMPORTANT BREAK 

		if (vote == 'X')
			break;

//INCREMENT
		else if (vote == 'A')
			votesForA += 1;

//INCREMENT

		else if (vote == 'B')
			votesForB += 1;

//INCREMENT
		else if (vote == 'C')
			votesForC += 1;
			
//INCREMENT
		else
			spoiltVotes += 1;
	}
}
// display results
cout << endl << endl;
cout << "Total candidate A: " << votesForA << endl;
cout << "Total candidate B: " << votesForB << endl;
cout << "Total candidate C: " << votesForC << endl;
cout << "Total spoilt votes: " << spoiltVotes << endl;
return 0;
}