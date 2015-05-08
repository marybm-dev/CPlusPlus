#ifndef CIRCLE_H
#define CIRCLE_H
#include "entity.h"
#include <iostream>
using namespace std;

class circle : public Entity
{
    protected:
        int r;
        string color;
    public:
        circle(int xx, int yy, int rr, string clr);
        virtual void Draw();
        virtual void Move();

};

#endif // CIRCLE_H
