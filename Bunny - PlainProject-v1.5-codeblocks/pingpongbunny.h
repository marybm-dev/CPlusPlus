#ifndef PINGPONGBUNNY_H
#define PINGPONGBUNNY_H
#include "floatingbunny.h"
#include <iostream>
using namespace std;

class PingPongBunny : public FloatingBunny
{
    public:
        PingPongBunny(string imageFile, int bx, int by);
        virtual void Move();
};

#endif // PINGPONGBUNNY_H
