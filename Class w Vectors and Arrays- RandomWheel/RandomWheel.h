#ifndef RANDOMWHEEL_H
#define RANDOMWHEEL_H
#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class RandomWheel
{
    private:
        int numberOfItems;
        int currentItem;
        vector<int> itemValues;
        vector<string> itemLabels;

    public:
        // CONSTRUCTOR
        RandomWheel(int itemCount, int value[], string labels[]);
        // MUTATOR
        void Spin();
        // ACCESSORS
        int GetCurrentValue() const;
        string GetCurrentLabel() const;
};

#endif // RANDOMWHEEL_H
