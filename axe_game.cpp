#include "raylib.h"
int main()
{
    // Keep the Window Open
    // Loop means repeating a code until the condition is met.
    // We call this loop condition as Boolean Condition
    // Loop executes if true
    /*
      expression -> condition -> true -> Statement (Body)
      again goes back to the expression until the condition is false.
    */

    bool equal{4 == 9};
    bool notEqual{4!=9};
    bool less{4<9};
    bool greater{4>9};
    bool lessEqual{4<=9};
    bool greatEqual{4>=9};

    int width = 350;
    int height = 200;
    InitWindow(width,height, "Krethick");
}
