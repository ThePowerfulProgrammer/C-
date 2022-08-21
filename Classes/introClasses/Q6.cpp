
/*
to create a ADT from a class
1. Make all the member variables private members of the class.
2. Make each of the basic operations that the programmer needs a public 
member function of the class, and fully specify how to use each such 
public member function.
3. Make any helping functions private member functions.

*/
#include <iostream>
#include <string>
using namespace std; 

class Movie {
    public:
        Movie(); // constructor which acts as mutator for movie name and FPB rating
        void addRating(int number); // a number must be passed as a parameter (1-5) used to increment user ratings by 1
        float getAverage(); // returns the average of ratings, all you need to do is copy and replace the following --> movie.getAverage(); where movie == Movie object
    private:
        string movieName;
        string FPB_rating; //  A, PG, 7-9 PG, 10-12 PG, 13, 16, 18, X18, XX)
        int ratings[5] = {0,0,0,0,0}; // each index represents ratings 1 - ratings 5  
        void getMovieDetails(); // helping functions needs to be private
};

Movie::Movie() {
    cout << "Enter movie name: ";
    getline(cin, movieName, '\n');
    cout << "Enter FPB rating: ";
    getline(cin, FPB_rating, '\n');
}

void Movie::addRating(int number) {
    // validate and only if 1 <= number <= 5, increment 
    if (number < 1 || number > 5) {
        // Nothing stated in pdf so 
        cout << "Rating is out of range and therefore not considered " << endl;
    } 
    else {
        switch (number) {
            case 1:
                ratings[0] ++;
                break;
            case 2:
                ratings[1] ++;
                break;
            case 3:
                ratings[2] ++;
                break;
            case 4:
                ratings[3] ++;
                break;
            case 5:
                ratings[4] ++;
                break;
        }
    }
    cout << "current ratings: "<< ratings[0] << ratings[1] << ratings[2] << ratings[3] << ratings[4] << endl;
}

float Movie::getAverage() {
    float avg = 0; // sum of all ratings / 5
    int sum = ratings[0] + ratings[1] + ratings[2] + ratings[3] + ratings[4];
    avg = (sum/5);
    return avg;
}

void Movie::getMovieDetails() {
    cout << "Movie details " << endl;
    cout << movieName << endl;
    cout << FPB_rating << endl;
}

int main() {
    // create 2 Movie objs
    Movie movie1;
    Movie movie2;
    
    // add 5 ratings for movie1
    for (int i = 0; i<5; i++) {
        int r;
        cout << "Enter rating for movie1: ";
        cin >> r;
        movie1.addRating(r);
        cout << endl;
    }
    
    // add 5 ratings for movie2
    for (int i = 0; i<5; i++) {
        int r;
        cout << "Enter rating for movie2: ";
        cin >> r;
        movie2.addRating(r);
        cout << endl;
    }
    
    // average rating
    float avg1 = movie1.getAverage();
    float avg2 = movie2.getAverage();
    
    // display Movie info
    
    movie1.getMovieDetails();
    cout << avg1 << endl;
    movie2.getMovieDetails();
    cout << avg2 << endl;
    
    return 0;
    
}






