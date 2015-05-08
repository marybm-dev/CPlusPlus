#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ducks = 17;
    int * duckPtr;

    cout << "ducks: " << ducks << endl;
    cout << "&ducks: " << &ducks << endl;

    duckPtr = &ducks;

    cout << "duckPtr: " << duckPtr << endl;
    cout << "&duckPtr: " << &duckPtr << endl;

    cout << "*duckPtr: " << *duckPtr << endl;

    *duckPtr = 42;
    cout << "==== *duckPtr was set equal to 42. ==== " << endl;

    cout << "ducks: " << ducks << endl;
    cout << "&ducks: " << &ducks << endl;
    cout << "duckPtr: " << duckPtr << endl;
    cout << "&duckPtr: " << &duckPtr << endl;
    cout << "*duckPtr: " << *duckPtr << endl;

    duckPtr = (int *) 0x28ff00;
    cout << "==== duckPtr was set equal to 9000. ==== " << endl;

    cout << "ducks: " << ducks << endl;
    cout << "&ducks: " << &ducks << endl;
    cout << "duckPtr: " << duckPtr << endl;
    cout << "&duckPtr: " << &duckPtr << endl;
    cout << "*duckPtr: " << *duckPtr << endl;
}
}
