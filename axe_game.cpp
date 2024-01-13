#include "raylib.h"
#include<iostream>
using namespace std;
int main()
{
   /*
    Collision detection involves checking the edges of a box to see if it is overlapping with the other box.
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
   
   // Circle edges, edges of the x and y axis of the circle
   int l_circle_x{circle_x - circle_radius}; // Left side
   int r_circle_x{circle_x + circle_radius}; // Right side
   int u_circle_y{circle_y - circle_radius}; // upper edge
   int b_circle_y{circle_y + circle_radius}; // bottom edge

   // Axe(Rectangle) coordinates
   int axe_x{400};
   int axe_y{0};
   int axe_length{50}; // We will be using it for width and height.
   
   // axe edges. edges of the x and y axis of the axe
   int l_axe_x{axe_x};
   int r_axe_x{axe_x + axe_length};
   int u_axe_y{axe_y};
   int b_axe_y{axe_y + axe_length};
   
   bool collision_with_axe=
                 (b_axe_y >= u_circle_y) && 
                 (u_axe_y <= b_circle_y) && 
                 (r_axe_x >= l_circle_x) && 
                 (l_axe_x <= r_circle_x); 
                 // b for bottom, u for upper, l for left and r for right

   int direction{10};

   
   
   // SetTargetFPS is used to control the framerate at which your game updates and renders
   SetTargetFPS(60);
   while (WindowShouldClose() != true) // Until this action execued, the screen stays open. 
   {
    BeginDrawing(); // AIDS IN SETUP AND TEARDOWN OF THE CANVAS (Does the heavy lifting)
    ClearBackground(WHITE); // We need to clear the BG to avoid flickering.
    
      if(collision_with_axe)
      {
        DrawText("Game Over!",400,200,20,RED);
      }
      else
      {
      // This is where game logic starts
      
      // Update the edges for the circle and rectangle
      l_circle_x = circle_x - circle_radius;
      r_circle_x = circle_x + circle_radius;
      u_circle_y = circle_y - circle_radius;
      b_circle_y = circle_y + circle_radius;
      
      l_axe_x = axe_x;
      r_axe_x = axe_x + axe_length;
      u_axe_y = axe_y;
      b_axe_y = axe_y + axe_length;

      // Update collision_with_axe
      collision_with_axe=
                 (b_axe_y >= u_circle_y) && 
                 (u_axe_y <= b_circle_y) && 
                 (r_axe_x >= l_circle_x) && 
                 (l_axe_x <= r_circle_x); 

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
  }
    EndDrawing(); // AIDS IN SETUP AND TEARDOWN OF THE CANVAS (Does the heavy lifting)
  }
}
 
    
