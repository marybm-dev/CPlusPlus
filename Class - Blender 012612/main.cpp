#include <iostream>

using namespace std;

class Blender
{
    private:
        string typeOfSmoothie;
        int numberOfSpeed;
        int volume;

    public:
        // Constructor
        Blender();
        // Mutators
        void SelectSpeed(int desireSpeed);
        void StartBlending(string item);
        // Accessors
        int DisplayAmountOfSmoothie() const;
        bool crushesIce;
};

int main()
{
    Blender blender1;
    string ingredient;
    while (blender1.crushesIce)
    {
        blender1.StartBlending(ingredient);
    }
    blender1.DisplayAmountOfSmoothie();

}

Blender::Blender()
{
    numberOfSpeed = 10;
    volume = 32;
    crushesIce = true;
}

void Blender::SelectSpeed(int desireSpeed)
{
    if (desireSpeed = 10)
    {
        crushesIce = true;
        volume += 10;
    }
    else if (desireSpeed = 5)
    {
        crushesIce = false;
        volume -= 5;
    }
    else
        cout << "Error - " << desireSpeed << "is not a valid speed\n";
}

void Blender::StartBlending(string item)
{
    volume += 5;
    cout << "What will be in your smoothie? ";
    cin >> item;
}

int Blender::DisplayAmountOfSmoothie() const
{
    cout << "---- " << typeOfSmoothie << " Smoothie ---\n";
    cout << "Will make "<< volume << "ounces " << endl;
    cout << "-------------------------" << endl;
}
