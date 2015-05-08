#include "DriftingBunny.h"

DriftingBunny::DriftingBunny(int xcoord, int ycoord, string fname)
                        : FloatingBunny (xcoord, ycoord, fname)
{

}

void DriftingBunny::Move()
{
    x = x + 3;
    y = y + 2;
}
