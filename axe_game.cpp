#include "raylib.h"
#include<iostream>
using namespace std;
int main()
{
   
   // Moving a Circle
   /*
      Usage of if statement and how it can be used to check boolean expression.
      Run code under certain conditions
      Detect key presses.
       -> We further use the keys to move the circle.
       IsKeyDown checks to see if a key is pressed
       Input is int.
       Example if we want to use the D key we can use KEY_D.
   */ 
   
   // Window Dimensions 
   int width;
   int height;
   // Set the width size
   width = 350;
   height = 200;
   // Initialise the window
   InitWindow(width,height, "Axe Game");
   while (WindowShouldClose() != true) // Until this action execued, the screen stays open. 
   {
    BeginDrawing(); // AIDS IN SETUP AND TEARDOWN OF THE CANVAS (Does the heavy lifting)
    ClearBackground(WHITE); // We need to clear the BG to avoid flickering.
    DrawCircle(175,100,25,BLUE);
    EndDrawing(); // AIDS IN SETUP AND TEARDOWN OF THE CANVAS (Does the heavy lifting)
   }

 
    
}
