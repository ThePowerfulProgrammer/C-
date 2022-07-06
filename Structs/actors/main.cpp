#include <iostream>
#include <fstream>

using namespace std;

struct MovieInfo {
    string title;
    string director;
    int year;
    string main_actors[5];
};

void inputData(MovieInfo & movieP, int & pos) {
    string actor;
    string add;

    cout << "Enter movie title: " ;
    getline(cin, movieP.title, '\n');
    cout << "Enter director name: ";
    getline(cin, movieP.director, '\n');
    cout << "Enter year movie was made: ";
    cin >> movieP.year;
    cout << "Enter actors name: ";
    getline(cin >> ws, actor, '\n');
    movieP.main_actors[pos] = actor;
    pos +=1;
    cout << "Do you want to add more actors? " << endl;
    cin >> add;
    while (add == "y") {
        cout << "Enter actors name: ";
        getline(cin >> ws, actor, '\n');
        movieP.main_actors[pos] = actor;
        pos +=1;
        cin >> add;
    }


}

void displayData(const MovieInfo & movieP, int pos) {
    cout << "Movie Details " << endl;
    cout << "============= " << endl;
    cout << "Movie title: " << movieP.title << endl;
    cout << "Movie derector: " << movieP.director << endl;
    cout << "Release year: " << movieP.year << endl;
    cout << "Main actors: " << endl;
    for (int i = 0; i<pos; i++) {
        cout << "actor "<< movieP.main_actors[i] << endl;
    }
}

bool directorActor(const MovieInfo & movieP, int pos) {
    for (int i = 0; i < pos; i++) {
        if (movieP.main_actors[i] == movieP.director) {
            return true;
        }
    }
    return false;
}

int main()
{
    int pos = 0;
    MovieInfo movie1;
    inputData(movie1, pos);
    cout << endl;
    displayData(movie1, pos);
    cout << endl;
    cout << directorActor(movie1, pos) << endl;

    return 0;
}
