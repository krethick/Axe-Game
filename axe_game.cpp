#include "raylib.h"
int main()
{
    // We refer fractional number as floating point numbers  
    // Two Floating data types - Float and Double
    // Float can take 6-7 digits, Less Precision and requires less memory
    // Double can take 15-16 digits, More precision and takes more memory
    // If you want to conserve memory use float or else use double.
    // Boolean has only True and False, used to make decision in code.
   
    float root_beer;
    root_beer = 1.99;
    double cheese_burger;
    cheese_burger = 5.99;
    bool shouldHaveLunch;
    shouldHaveLunch = true;

    int width = 350;
    int height = 200;
    InitWindow(width,height, "Krethick");
}
