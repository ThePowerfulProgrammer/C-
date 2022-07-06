#include <iostream>

using namespace std;

int main()
{
   /*
(a) What is a pointer?
(b) What is a dereferencing operator?
(c) What is the difference between assignment statements p1 = p2;
 and
 *p1 = *p2;
(d) What is a dangling pointer?
(e) What is a dynamic variable?
(f) What is the purpose of the new operator?
(g) What is the purpose of the delete operator?
(h) What is the freestore (also called the heap)?
(i) What is the difference between dynamic variables and automatic variables?
(j) What is a dynamic array?
(k) What is the advantage of using dynamic arrays?
(l) What is the relationship between pointers and arrays?
(m) Explain what is the difference between int* p1, p2;
and
typedef int* IntPtr;
IntPtr p1, p2;
(n) For each of the following, write a single C++ statement that performs the identified
task. (7)
(i) Declare two variables fPtr1 and fPtr2 to be pointers to objects of type
double.
(ii) Create a dynamic variable to which fPtr1 points.
(iii) If the pointer fPtr2 is undefined (i.e. it does not point to any variable), let it
point to the same variable that fPtr1 points to.
(iv) Print the address of the object pointed to by fPtr1.
(v) Print the value of the object pointed to by fPtr2.
(vi) Release the memory occupied by the dynamic variable to which fPtr1 points.
(vii) Assign null values to the pointers fPtr1 and fPtr2.

   */

   // a
   cout << " a)" << endl;
   cout << "A pointer is a construct that gives you more control of the computer(s) memory" << endl << endl;

   // b
   cout << " b)" << endl;
   cout << "You can use the pointer variable to get the memory address of a variable (used together with the & reference operator). " ;
   cout << "Or you can accomplish this using the * operator (the dereference operator):" << endl << endl;

   // c
   cout << " c)" << endl;
   cout << "p1 = p2" << " sets the value of p1 to the value of p2 by pointing p1 to the value of p2 in memory " ;
   cout << "*p1 = *p2 " << " sets the value in memory of p1 to the same value in memory of p2 "  << endl << endl;

   // d
   cout << " d)" << endl;
   cout << " When you apply delete to a pointer variable, the dynamic variable it is pointing is destroyed At that point, the value of the pointer variable is underfined " ;
   cout << "These undefined variables are called dangling pointers " << endl << endl;

   // e
   cout << " e)" << endl;
   cout << "Variables that are created using the new operator are called dynamic variables" << endl << endl;

   // f
   cout << " f)" << endl;
   cout << "The new operator produces a new, nameless variable and returns a pointer that points to this new variable" << endl << endl;

   // g
   cout << " g)" << endl;
   cout << "The delete operator eliminates a dynamic variable and returns the memory that the dynamic variable occupied to the freestore so that the memory can be reused" << endl << endl;

   // h
   cout << " h)" << endl;
   cout << "A special area of memory reserved for dynamic variables is called the freestore " << endl << endl;

    // i
    cout << " i)" << endl;
    cout << "dynamic variables are created using the new operator, these variables are created and destroyed while the program is running --- " ;
    cout << " Variables declared within main or within some other function definition are called automatic variables " << endl << endl;

    // j
    cout << " j)" << endl;
    cout << "Dynamic arrays are arrays whose size is determined while the program is running, rather than being fixed when the program is written " << endl << endl;

    // k
    cout << " k) " << endl;
    cout << "So an issue with arrays is that the size must be specified before running the program and sometimes we are unsure what the size should be --- " ;
    cout << " Dynamic arrays have an advantage in that the array size can be determined while the program is running " << endl << endl;


    return 0;
}
