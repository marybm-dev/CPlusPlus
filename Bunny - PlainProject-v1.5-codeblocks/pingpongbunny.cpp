#include "pingpongbunny.h"
#include "floatingbunny.h"
#include "lpclib.h"
#include <iostream>
#include <windows.h>
using namespace std;

PingPongBunny::PingPongBunny(string imageFile, int bx, int by)
    : FloatingBunny (imageFile, bx, by)
{

}
void PingPongBunny::Move()
{
    x += 100;
    y += 100;
    if (x == 800)
    {
        for (int i=0; i<x; i++)
        x -= RandomInt(0,100);
    }
    if (y == 600)
    {
        for (int i=0; i<y; i++)
        y -= RandomInt(0,100);
    }
}
