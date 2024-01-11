#include "raylib.h"
#include<iostream>
using namespace std;
int main()
{
   // We are going to see how functions are going to return values or outputs
   // Implement close window functionality
   /*
    How to return a function in 3 ways

    -> int answerToLife = getTheAnswer();
    -> int theUniverse { getTheAnswer()};
    -> useAnswer (getTheAnswer));

    -> WindowShouldClose() => Closes the window if x icon clicked or escape button is pressed
    -> Two ways to use it in while condition
      i) WindowShouldClose() != true
     ii) WindowShouldClose() == false
   */ 
   int width;
   
   // Set the width size
   width = 350;
   // Initialise the window
   InitWindow(width,200, "Axe Game");
   while (WindowShouldClose() != true) // Until this action execued, the screen stays open. 
   {
    BeginDrawing(); // AIDS IN SETUP AND TEARDOWN OF THE CANVAS (Does the heavy lifting)
    ClearBackground(RED); // We need to clear the BG to avoid flickering.
    EndDrawing(); // AIDS IN SETUP AND TEARDOWN OF THE CANVAS (Does the heavy lifting)
   }

 
    
}
