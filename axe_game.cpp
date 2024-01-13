#include "raylib.h"
#include<iostream>
using namespace std;
int main()
{
   /*
    Collision
      -> For eg circle_x = 225 and Radius = 25
       Then the total would be circle_x + R = 225
       circle_x + R >= 300

      -> circle_x - R <= 350


   */ 

   // Window Dimensions
   int width{800}; // Use braced initialisation and set the width size
   int height{450}; // Use braced initialisation and set the height size

   // Initialise the window
   InitWindow(width,height, "Axe Game");

   // Circle coordinates
   int circle_x{200};
   int circle_y{200};
   int circle_radius{25};
   
   // Circle edges
   int l_circle_x{circle_x - circle_radius}; // Left side
   int r_circle_x{circle_x + circle_radius}; // Right side
   int u_circle_y{circle_y - circle_radius}; // upper edge
   int b_circle_y{circle_y + circle_radius}; // bottom edge

   // Axe(Rectangle) coordinates
   int axe_x{400};
   int axe_y{0};
   int axe_length{50}; // We will be using it for width and height.
   
   // axe edges
   int l_axe_x{axe_x};
   int r_axe_x{axe_x + axe_length};
   int u_axe_y{axe_y};
   int b_axe_y{axe_y + axe_length};

   int direction{10};

   
   
   // SetTargetFPS is used to control the framerate at which your game updates and renders
   SetTargetFPS(60);
   while (WindowShouldClose() != true) // Until this action execued, the screen stays open. 
   {
    BeginDrawing(); // AIDS IN SETUP AND TEARDOWN OF THE CANVAS (Does the heavy lifting)
    ClearBackground(WHITE); // We need to clear the BG to avoid flickering.

    // This is where game logic starts

    DrawCircle(circle_x,circle_y,circle_radius,BLUE);
    DrawRectangle(axe_x,axe_y,axe_length,axe_length,RED);

    // Move the axe towards y-axis or downwards
    axe_y += direction; // Compound Assignment Operator

    // 450 is the height of the screen window
    if(axe_y > height || axe_y < 0)
    {
      direction = -direction; // negates the current value 
    }
    
    if(IsKeyDown(KEY_D) && circle_x < width) // circle_x < 350 (it is the extreme right) sets a boundary where the circle can't cross even further.
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
 
    
