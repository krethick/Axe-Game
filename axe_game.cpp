#include "raylib.h"
#include<iostream>
using namespace std;
int main()
{
  // Clear the window background using raylib colors.
  // FrameBuffer causes change in between color white and black in the window.
  // The outer portion is the window and the inner portion is the canvas area.

   int width;
   // Set the width size
   width = 350;
   // Initialise the window
   InitWindow(width,200, "Axe Game");
   while(true)
   {
    BeginDrawing(); // AIDS IN SETUP AND TEARDOWN OF THE CANVAS (Does the heavy lifting)
    ClearBackground(RED); // We need to clear the BG to avoid flickering.
    EndDrawing(); // AIDS IN SETUP AND TEARDOWN OF THE CANVAS (Does the heavy lifting)
   }
    
}
