#include "lpclib.h"
using namespace std;

void Pinski(double Ax, double Ay,
            double Bx, double By,
            double Cx, double Cy,
            int depth);

int main()
{
    DefineColor("black", 0, 0, 0);
    DefineColor("white", 255, 255, 255);
    GraphicsWindow(600, 400, "black");

    Pinski(0, 0,
           600, 0,
           300, 400,
           5);



    return 0;
}

void Pinski(double Ax, double Ay,
            double Bx, double By,
            double Cx, double Cy,
            int depth)
{
    if (depth == 0)
    {
        DrawTriangle(Ax, Ay, Bx, By, Cx, Cy,
                     "white", true);
    }
    else
    {
        int Px = (Ax + Bx) / 2;
        int Py = (Ay + By) / 2;
        int Qx = (Cx + Bx) / 2;
        int Qy = (Cy + By) / 2;
        int Rx = (Cx + Ax) / 2;
        int Ry = (Cy + Ay) / 2;
        Pinski(Ax, Ay, Px, Py, Rx, Ry, depth-1);
        Pinski(Px, Py, Bx, By, Qx, Qy, depth-1);
        Pinski(Rx, Ry, Qx, Qy, Cx, Cy, depth-1);
    }
}
}
