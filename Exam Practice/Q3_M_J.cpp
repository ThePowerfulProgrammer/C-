#include <iostream>

using namespace std;  

/*
MyMedia Publishers uses two parallel arrays to keep track of the number of subscriptions for each of their 
50 publications.   Array  publications holds  the names of the  magazines and newspapers  published 
and  array  subscriptions holds  the  number  of  subscriptions  for  each  corresponding  magazine  or 
newspaper. You  have  to write  a  void function, called  findMostSubs to  determine  which  publication 
has  the  most  subscribers. Function findMostSubs has to return the name of the publication as well as 
the number of subscribers to that publication. 
 
 the function is called in the main program as follows: 
findMostSubs(publications, subscriptions, 
mostSubscriptions, nrMostSubscriptions);

*/  
const int NUM_PUBS = 10; // number publications --> should be 50

void findMostSubs(string publications[], int subscribers[], string & mostSubscriptions,int nrMostSubscriptions) {
    // void cannot return....Therefore I will set and cout values.
    nrMostSubscriptions = subscribers[0];
    

    for (int i = 0; i<NUM_PUBS ; i++) {
        if (subscribers[i] >= nrMostSubscriptions ) {
            nrMostSubscriptions = subscribers[i];
            mostSubscriptions = publications[i];
        }
    }
    cout << nrMostSubscriptions << endl;
    cout << mostSubscriptions << endl;


}


int main() {
    string publications[NUM_PUBS] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"}; // titles of the publications 
    int subscriptions[NUM_PUBS] = {100,2,300,4,5,6,8,7,90,10}; // number of subscriptions for the 
    int nrMostSubscriptions; // number of subscriptions for 
    string mostSubscriptions; // title of publication with most subscriptions
    
    findMostSubs(publications, subscriptions, mostSubscriptions, nrMostSubscriptions);



    return 0 ;
}