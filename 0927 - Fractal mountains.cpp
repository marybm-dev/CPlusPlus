#include "lpclib.h"
#include <cmath>
using namespace std;

void Mountain(double Ax, double Ay,
              double Bx, double By,
              int depth);

int main()
{
    DefineColor("black", 0, 0, 0);
    DefineColor("white", 255, 255, 255);
    GraphicsWindow(600, 400, "black");

    while (1)
    {
        cout << "Depth: ";
        int userdepth = GetInt();
        DrawRectangle(0,0, 600,400, "black", true);
        Mountain(0, 380, 590, 300, userdepth);
    }
    string pause = GetLine();
}

void Mountain(double Ax, double Ay,
              double Bx, double By,
              int depth)
{
    if  (depth == 0)
    {
        DrawLine(Ax, Ay, Bx, By, "white");
    }
    else
    {
        int yadjust = 0.3 * sqrt((Bx-Ax)*(Bx-Ax) + (By-Ay)*(By-Ay));
        yadjust *= RandomDouble(0.7, 1.3);
        int Px = ((Bx - Ax) / 3) + Ax;
        int Py = ((By - Ay) / 3) + Ay;
        int Qx = ((2 * (Bx - Ax)) / 3) + Ax;
        int Qy = ((2 * (By - Ay)) / 3) + Ay;
        int Mx = (Ax + Bx) / 2.0;
        int My = ((Ay + By) / 2.0) - yadjust;
        Mountain(Ax, Ay, Px, Py, depth-1);
        Mountain(Px, Py, Mx, My, depth-1);
        Mountain(Mx, My, Qx, Qy, depth-1);
        Mountain(Qx, Qy, Bx, By, depth-1);
    }
}
}
