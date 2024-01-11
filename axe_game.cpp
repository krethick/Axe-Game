#include "raylib.h"
#include<iostream>
using namespace std;
int main()
{
   
   // Draw a Circle
   /*
    i)Raylib has a function called Draw Circle.
    ii)Draw Circle takes three inputs centerX, centerY and radius.
    the color input takes it as raylib color.
    Radius is half of a cricle's diameter
   iii) The centerX and centerY are X and Y coordinates stored in pixles.
    iv) We used half of the windows width and half of the windows height to place the 
        cirlce in the center.
   */ 
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
