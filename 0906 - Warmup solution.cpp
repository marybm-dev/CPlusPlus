#include <iomanip>
#include "vector.h"
#include "grid.h"
#include "lpclib.h"
#include "scanner.h"
#include "shapes.h"
using namespace std;

int main()
{
    InitShapes();

    Vector<string> colors;

    while (1)
    {
        cout << "Gimme a color: ";
        string userinput = GetLine();
        if (userinput == "DONE")
            break;
        colors.add(userinput);
    }

    string onecolor;
    foreach (onecolor in colors)
    {
        for (int i = 0; i < 100; i++)
        {
            int x = RandomInt(100, 500);
            int y = RandomInt(100, 500);
            DrawPoint(x, y, onecolor);
        }
    }
    return 0;
}

}
