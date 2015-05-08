#include <iostream>
#include <iomanip>
#include <windows.h>
#include "lpclib.h"
#include "entity.h"
#include "floatingbunny.h"
#include <windows.h>
#include "pingpongbunny.h"
#include "circle.h"

using namespace std;


int main()
{
    // Sample code

    // Begin by defining a few colors
    DefineColor("green", 0, 255, 0);
    DefineColor("red", 255, 0, 0);
    DefineColor("yellow", 255, 255, 0);
    DefineColor("black", 0, 0, 0);
    DefineColor("white", 255, 255, 255);
    DefineColor("grey", 100, 100, 100);

    // Open the graphics window
    GraphicsWindow(800, 600, "black");
    FloatingBunny bunny1("bunny.bmp", 100, 200);
    PingPongBunny bunny2("bunny.bmp", 100, 200);
    circle c1(100,100,30,"green");
    while (1)
    {
        DrawRectangle(0,0,800,600,"black",true);
        bunny1.Draw();
        bunny2.Draw();
        bunny1.Move();
        bunny2.Move();
        c1.Draw();
        c1.Move();
        Sleep(300);
    }

    return 0;
}
