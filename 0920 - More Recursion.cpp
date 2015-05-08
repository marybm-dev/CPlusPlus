#include <iostream>
#include <iomanip>
#include "lpclib.h"
#include "stack.h"
#include "vector.h"
using namespace std;

int CountCannonballs(int n);
int CountAs(string s);

int main()
{
    cout << CountCannonballs(3) << endl;
    cout << CountAs("koala") << endl;
}

int CountCannonballs(int n)
{
    cout << "CountCannonballs(" << n << ")n";
    if (n == 0)
        return 0;
    return (n*n + CountCannonballs(n-1));
}

int CountAs(string s)
{
    cout << "CountAs(" << s << ")n";
    if (s == "")
    {
        return 0;
    }
    if (s.length() == 1)
    {
        if (s == "a")
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int halfway = s.length() / 2;
    return (   CountAs(s.substr(0, halfway))
             + CountAs(s.substr(halfway))
            );
}
}
