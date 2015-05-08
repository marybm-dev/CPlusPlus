#ifndef FLOATINGBUNNY_H
#define FLOATINGBUNNY_H
#include "entity.h"
#include <iostream>
using namespace std;

class FloatingBunny : public Entity
{
    protected:
        string fileName;
    public:
        FloatingBunny (string imageFile, int bx, int by);
        virtual void Draw();
        virtual void Move();
};

#endif // FLOATINGBUNNY_H
