#include "raylib.h"
int main()
{
   // Debugging is the process of finding and removing errors.
   // The dark red dot is the break point 
   // We can continue to the next line by clicking the step into.
   // We can use the continue or f5 to move towards the next breakpoint.
   // Has Garbage data and ways to initialize.

   /*
     Initialization by Assignment
     Example:

     float root_beer;     UNINITIALIZED
     root_beer = 1.99;
 
     float root_beer = 1.99 INITIALIZED

     Braced Initialization

     double cheese_burger{5.99}; INITIALIZED
     double cheese_burger{};  INITIALIZED TO 0
     
   */

    float root_beer = 1.99;
    double cheese_burger{5.99};
    bool shouldHaveLuch{};

    int width = 350;
    int height = 200;
    InitWindow(width,height, "Krethick");
}
