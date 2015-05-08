#include "circle.h"
#include "entity.h"
#include <iostream>
#include "lpclib.h"
using namespace std;

circle::circle(int xx, int yy, int rr, string clr) : Entity (xx, yy)
{
    r = rr;
    color = clr;
}
void circle::Draw()
{
    DrawCircle (x, y, r, color, true);
}
void circle::Move()
{
    x += r * 5;
    y += r * 7;
}
