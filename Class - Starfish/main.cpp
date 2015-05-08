#include <iostream>
#include "Starfish.h"
using namespace std;

int main()
{
    Starfish bob;
    cout << "bob says: ";
    bob.Describe();

    Starfish amy(7);
    cout << "amy says: ";
    bob.Describe();

}
