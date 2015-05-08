#include "floatingbunny.h"
#include "entity.h"
#include "lpclib.h"
#include <iostream>
#include <windows.h>
using namespace std;

FloatingBunny::FloatingBunny(string imageFile, int bx, int by) : Entity (bx, by)
{
    fileName = imageFile;
}

void FloatingBunny::Draw()
{
    DrawImage(fileName, x, y);
}

void FloatingBunny::Move()
{
    x += RandomInt(-5,20);
    y += RandomInt(-5,20);
}

