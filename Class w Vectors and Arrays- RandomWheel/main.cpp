#include <iostream>
#include <vector>
#include <ctime>
#include "RandomWheel.h"
using namespace std;

int main()
{
    string fruits[5] = {"apple", "orange", "banana", "pineapple", "mango"};
    int fruitScores[5] = {7, 10, 12, 15, 99};

    RandomWheel fruitSpinner(5, fruitScores, fruits);

    while (1)
    {
        string input;
        cout << "Spin (y/n)? ";
        cin >> input;
        if (input != "y")
            break;
        fruitSpinner.Spin();
        cout << "You got a " << fruitSpinner.GetCurrentLabel() << "! ";
        cout << "You get " << fruitSpinner.GetCurrentValue() << " points.\n";
    }
}
