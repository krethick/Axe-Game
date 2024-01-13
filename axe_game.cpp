#include "raylib.h"
#include<iostream>
using namespace std;
int main()
{
   /*
    DRAWING THE AXE

    DrawRectangle(posX, posY, height, color)
     -> posX, posY, width and height are ints.
     -> color is a raylib color
     -> posX and posY are the upper left corner

     Compound Assignment Operator
     -> axe_y = axe_y + 10; Normal Operator
     -> axe_y += 10; Compound Assignment Operator
   */ 

   // Window Dimensions
   int width{800}; // Use braced initialisation and set the width size
   int height{450}; // Use braced initialisation and set the height size

   // Rectangle Dimensions
   int rectangle_width{50};
   int rectangle_height{50};

   // Initialise the window
   InitWindow(width,height, "Axe Game");

   // Circle coordinates
   int circle_x{200};
   int circle_y{200};

   // Axe(Rectangle) coordinates
   int axe_x{400};
   int axe_y{0};
   
   // SetTargetFPS is used to control the framerate at which your game updates and renders
   SetTargetFPS(60);
   while (WindowShouldClose() != true) // Until this action execued, the screen stays open. 
   {
    BeginDrawing(); // AIDS IN SETUP AND TEARDOWN OF THE CANVAS (Does the heavy lifting)
    ClearBackground(WHITE); // We need to clear the BG to avoid flickering.

    // This is where game logic starts

    DrawCircle(circle_x,circle_y,25,BLUE);
    DrawRectangle(axe_x,axe_y,rectangle_width,rectangle_height,RED);

    // Move the axe towards y-axis or downwards
    axe_y += 10; // Compound Assignment Operator
    
    if(IsKeyDown(KEY_D) && circle_x < 350) // circle_x < 350 (it is the extreme right) sets a boundary where the circle can't cross even further.
    {
        circle_x += 10; // Compound Assignment Operator
    }

    if(IsKeyDown(KEY_A) && circle_x > 0)// circle_y > 0 (it is the extreme left). sets a boundary where the circle can't cross even further.
    {
        circle_x -= 10; // Compound Assignment Operator
    }

    // This is where game logic ends
    EndDrawing(); // AIDS IN SETUP AND TEARDOWN OF THE CANVAS (Does the heavy lifting)
   }

 
    
}
