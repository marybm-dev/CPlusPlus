#include <iostream>
#include "Vehicle.h"
using namespace std;

class Vehicle
{
    private:
        int currentSpeed;
        bool isRunning;
    public:
    // CONSTRUCTOR
        Vehicle();
    // MUTATORS
        void turnOn();
        void turnOff();
        void speedUp(double rate);
        void slowDown(double rate);
    // ACCESSORS
        void reportData() const;
};

Vehicle::Vehicle()
{
    currentSpeed = 0;
    isRunning = false;
}

void Vehicle::turnOn()
{
    isRunning = true;
}

void Vehicle::turnOff()
{
    isRunning = false;
}

void Vehicle::speedUp(double rate)
{
    if (isRunning == true)
    {
        if (currentSpeed == 0)
        {
            currentSpeed = 10* rate;
        }
        else
        {
            currentSpeed += currentSpeed * rate;
        }
    }

}
void Vehicle::slowDown(double rate)
{
    currentSpeed *= rate;
}

void Vehicle::reportData() const
{
    if (isRunning == false)
    {
        cout << "The vehicle is off.\n";
    }
    else
    {

    }
}
