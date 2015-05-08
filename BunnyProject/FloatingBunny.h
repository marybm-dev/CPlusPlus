#ifndef FLOATINGBUNNY_H
#define FLOATINGBUNNY_H
#include <iostream>
#include "Entity.h"
using namespace std;

class FloatingBunny : public Entity
{
    protected:
        string fileName;
    public:
        FloatingBunny(int xcoord, int ycoord, string fname);
        virtual void Draw();
        virtual void Move();
};

#endif // FLOATINGBUNNY_H
