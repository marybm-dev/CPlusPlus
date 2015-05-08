#include "FloatingBunny.h"
#include "lpclib.h"

FloatingBunny::FloatingBunny(int xcoord, int ycoord, string fname)
                                        : Entity(xcoord, ycoord)
{
    fileName = fname;
}
void FloatingBunny::Draw()
{
    DrawImage(fileName, x, y);
}
void FloatingBunny::Move()
{
    x += RandomInt(-5, 5);
    y += RandomInt(-5,5);
}
