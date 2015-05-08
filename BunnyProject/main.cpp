#include <iostream>
#include <iomanip>
#include <windows.h> // Mac people: don't do this
#include "lpclib.h"
#include "Entity.h"
#include "FloatingBunny.h"
#include "DriftingBunny.h"
using namespace std;


int main()
{
    DefineColor("black", 0, 0, 0);
    GraphicsWindow(800, 600, "black");

    vector<Entity *> everything;
    everything.push_back(new DriftingBunny(50, 50, "bunny.bmp"));
    everything.push_back(new FloatingBunny(600, 400, "bunny.bmp"));
    everything.push_back(new DriftingBunny(300, 0, "bunny.bmp"));

    while (1)
    {
        DrawRectangle(0, 0, 800, 600, "black", true);
        for (int i = 0; i < everything.size(); i++)
        {
            everything[i]->Move();
            everything[i]->Draw();
        }
        Sleep(100);
    }
}
