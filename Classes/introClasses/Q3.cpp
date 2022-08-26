#include<iostream>
using namespace std;

class Movie
{
   //class variables
   public:
       string name;
       string mpaa;
       int rated_one, rated_two, rated_three, rated_four, rated_five;
      
       //getter and setter 
       string getName()
       {
           return this->name;
       }
      
       void setName(string name)
       {
           this->name = name;
       }
      
       string getMpaa()
       {
           return this->mpaa;
       }
      
       void setMpaa(string mpaa)
       {
           this->mpaa = mpaa;
       }
      
       //method to add a rating
       void addRating(int rating)
       {
           // rating validation
           if(rating >= 1 && rating <= 5)
           {
               switch(rating)
               {
                   case 1:
                       rated_one += 1;
                       break;
                   case 2:
                       rated_two += 1;
                       break;
                   case 3:
                       rated_three += 1;
                       break;
                   case 4:
                       rated_four += 1;
                       break;
                   case 5:
                       rated_five += 1;
                       break;
               }
           }
           else
           {
               cout << "Rating invalid and therefore not considered" << endl;
           }
       }
       //returns the avergae rating
       double getAverage(){
           double total = 0.0 + rated_one + rated_two +
           rated_three + rated_four + rated_five;
          
           return total/5;
       }
      
       //constructor
       Movie(string name, string mpaa)
       {
           setName(name);
           setMpaa(mpaa);
           this->rated_one = this->rated_two = this->rated_three = this->rated_four = this->rated_five = 0;
       }
};

int main()
{
   // set and get data
   Movie m1 = Movie("Deadpool", "X18");
   m1.addRating(1);
   m1.addRating(2);
   m1.addRating(3);
   m1.addRating(2);
   m1.addRating(3);
   cout << "Name: " << m1.getName() << "\t\tMPAA: " << m1.getMpaa() << "\tAverage Rating: " << m1.getAverage() << endl;
  
  // set and get data
   Movie m2 = Movie("Wonderwoman", "10-12 PG");
   m2.addRating(5);
   m2.addRating(1);
   m2.addRating(4);
   m2.addRating(4);
   m2.addRating(5);
   cout << "Name: " << m2.getName() << "\tMPAA: " << m2.getMpaa() << "\t\tAverage Rating: " << m2.getAverage() << endl;
  
   return 0;
}