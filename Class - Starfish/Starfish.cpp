#include "Starfish.h"
#include <iostream>
using namespace std;

Starfish::Starfish()
{
    cout << "(Default Constructor is running)\n";
    numberOfArms = 5;
}

Starfish::Starfish(int armsRequested)
{
    cout << "(Constructor with argument being called)\n";
    numberOfArms = armsRequested;
}

void Starfish::Describe() const
{
    cout << "I have " << numberOfArms << " arms.\n";
}
