#include "raylib.h"
#include<iostream>
using namespace std;
int main()
{
    // Keep the Window Open
    // Loop means repeating a code until the condition is met.
    // We call this loop condition as Boolean Condition
    // Loop executes if true
    /*
      expression -> condition -> true -> Statement (Body)
      again goes back to the expression until the condition is false.
    */
     
   // Initial value of milesToDisneyland is 100;
   int milesToDisneyland {100};
   // Afer that the loop is implemented.
   // Eg milesToDisneyland 100 > 0
   while(milesToDisneyland > 0 )
   {
    // If True the statement gets executed.
    // After that 100 gets decremented to 1.
    // This process continues until milesToDisneyland becomes 0.
    cout<<" \n Are we there yet";
    milesToDisneyland = milesToDisneyland - 1;
   }
    
}
