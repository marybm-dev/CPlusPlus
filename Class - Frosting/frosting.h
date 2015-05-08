#ifndef FROSTING_H
#define FROSTING_H
#include <iostream>
using namespace std;

class frosting
{
    private:
        string color;
        int thickness;
    public:
        frosting();
        frosting(string colorRequested);
        frosting(int thicknessRequested);
        frosting(string colorRequested, int thicknessRequested);
        void Describe() const;
};

#endif // FROSTING_H
