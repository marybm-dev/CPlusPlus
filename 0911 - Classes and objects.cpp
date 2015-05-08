#include <iomanip>
#include "lpclib.h"
using namespace std;

class Spaceship
{
  private:
    /// variables
    int x;
    int y;
    int size;
    bool engineIsOn;
  public:
    /// methods
    Spaceship(int startx, int starty, int whatsize); /// constructor
    void Draw();
    void ToggleEngine();
};

int main()
{
    DefineColor("black", 0, 0, 0);
    DefineColor("green", 0, 255, 0);
    DefineColor("yellow", 255, 255, 0);
    DefineColor("red", 255, 0, 0);
    GraphicsWindow(800, 600, "black");

    Spaceship ship1(400, 300, 50);
    Spaceship ship2(700, 100, 25);
    ship1.ToggleEngine();

    ship1.Draw();
    ship2.Draw();
}


Spaceship::Spaceship(int startx, int starty, int whatsize)
{
    x = startx;
    y = starty;
    size = whatsize;
    engineIsOn = false;
}

void Spaceship::Draw()
{
    DrawCircle(x, y, size, "green", true);
    DrawRectangle(x-size, y+10, 5, size+10, "yellow", true);
    DrawRectangle(x+size-5, y+10, 5, size+10, "yellow", true);
    if (engineIsOn)
    {
        DrawTriangle(x-size/2, y+size, x+size/2, y+size,
                     x, y+size*2, "red", true);
    }
}

void Spaceship::ToggleEngine()
{
    if (engineIsOn == true)
        engineIsOn = false;
    else
        engineIsOn = true;
}
}
