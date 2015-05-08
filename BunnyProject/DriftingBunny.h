#ifndef DRIFTINGBUNNY_H
#define DRIFTINGBUNNY_H
#include <iostream>
#include "FloatingBunny.h"
using namespace std;

/*
  Entity
    |
 FloatingBunny
    |
 DriftingBunny
 */

class DriftingBunny : public FloatingBunny
{
    public:
        DriftingBunny(int xcoord, int ycoord, string fname);
        virtual void Move();
};

#endif // DRIFTINGBUNNY_H
