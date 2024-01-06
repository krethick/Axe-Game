#include "raylib.h"
int main()
{
    // Equal to operator '=='
    // 5 == 9 (The numbers are the operands wheras the numbers are operators) 
   // Expression is an operator combined with operands i.e Returns a value

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
