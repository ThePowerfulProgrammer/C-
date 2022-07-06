#include <iostream>

using namespace std;

int main()
{
    // Pancakes easy and YUM!

    // initilise mFactor
    int mFactor;

    // Create base recipe
    string recipeName = "Pancakes" ;

    // Ingredients
    int flour = 1;
    int whitesugar = 2;
    int bakingPowder = 2;
    int salt = 1;
    int egg = 1;
    int milk = 1;
    int vegetableOil = 2;

    // method

    string step1 = "In a large bowl, mix flour, sugar, baking powder and salt. Make a well in the center, and pour in milk, egg and oil. Mix until smooth." ;
    string step2 = "Heat a lightly oiled griddle or frying pan over medium high heat. Pour or scoop the batter onto the griddle, using approximately 1/4 cup for each pancake. Brown on both sides and serve hot.";

    // Main Code
    cout << "Please enter the factor to multiply the Ingredients with: " ;
    cin >> mFactor ;

    cout << " " << endl ;

    cout << recipeName << endl ;

    cout << " " << endl ;


    cout << "Ingredients " << endl;
    cout << flour * mFactor << " Cups of flour" << endl ;
    cout << whitesugar * mFactor << " Tablespoons of sugar" << endl ;
    cout << bakingPowder * mFactor << " Teaspoons of bakingPowder" << endl ;
    cout << salt * mFactor << " Teaspoons of salt" << endl ;
    cout << egg * mFactor << " eggs beaten" << endl ;
    cout << milk * mFactor << " cup milks" << endl ;
    cout << vegetableOil * mFactor << " Tablespoons vegetableOil" << endl ;


    // Now method
    cout << " " << endl ;
    cout << "Method" << endl ;

    cout << step1 << endl ;
    cout << step2 << endl ;


    // end with message and blank line
    cout << "Congrats! You made yourself Pancakes." << endl ;

    cout << " " << endl ;

    return 0;
}
