#include "frosting.h"
#include <iostream>
using namespace std;

frosting::frosting()
{
    color = "white";
    thickness = 2;
}

frosting::frosting(string colorRequested)
{
    color = colorRequested;
}

frosting::frosting(int thicknessRequested)
{

    thickness = thicknessRequested;

}

frosting::frosting(string colorRequested, int thicknessRequested)
{
    color = colorRequested;
    thickness = thicknessRequested;
}

void frosting::Describe() const
{
    cout << "The frosting color is " << color << " and the thickness is " << thickness << endl;
}
