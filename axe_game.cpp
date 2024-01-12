#include "raylib.h"
#include<iostream>
using namespace std;
int main()
{
   /*
     Why is braced initialisation ?
     -> It is a uniform method for initializing data in C++ 11

     What is frame?
     -> It is an rendered image presented in the player's screen
     
     What is frame rate?
     -> It is a measurement of how quickly a number of frames appears within a second.
   */

   // Window Dimensions
   int width{350}; // Use braced initialisation and set the width size
   int height{200}; // Use braced initialisation and set the height size
   // Initialise the window
   InitWindow(width,height, "Axe Game");

   // Circle coordinates
   int circle_x{175};
   int circle_y{100};
   
   // SetTargetFPS is used to control the framerate at which your game updates and renders
   SetTargetFPS(60);
   while (WindowShouldClose() != true) // Until this action execued, the screen stays open. 
   {
    BeginDrawing(); // AIDS IN SETUP AND TEARDOWN OF THE CANVAS (Does the heavy lifting)
    ClearBackground(WHITE); // We need to clear the BG to avoid flickering.

    // This is where game logic starts

    DrawCircle(circle_x,circle_y,25,BLUE);
    
    if(IsKeyDown(KEY_D))
    {
        circle_x = circle_x + 10;
    }

    if(IsKeyDown(KEY_A))
    {
        circle_x = circle_x - 10;
    }

    // This is where game logic ends
    EndDrawing(); // AIDS IN SETUP AND TEARDOWN OF THE CANVAS (Does the heavy lifting)
   }

 
    
}
