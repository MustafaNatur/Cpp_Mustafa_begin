//It is necessary to write a program
//that checks the user's knowledge of the multiplication table.
//The user enters two single-digit integers by himself.
//The program asks the question: the result of multiplying the first number by the second. 
// The user must enter the answer and see on the screen whether he answered correctly or not.
//If not, show the correct result as well.

#include <iostream>
using namespace std;

int main()
{
     int a, b, res, UserRes; 
     cout<<"Set a: ";
     cin>>a;
     cout<<"Set b: ";
     cin>>b;
     res = a * b;
     cout<<"Enter your result: ";
     cin>>UserRes;

     if (UserRes == res){
         cout<<"Congratulations! ";
     } else {
         cout<<"Nooo! ";
     }
}
