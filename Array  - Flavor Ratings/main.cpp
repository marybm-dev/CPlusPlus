#include <iostream>

using namespace std;

const int SIZE = 5;

int main()
{
    string flavors[SIZE];
    int ratings[SIZE];
    for (int i=0; i<SIZE; i++)
    {
        cout << "Enter a flavor: ";
        cin >> flavors[i];
        cout << "Rate: " << flavors[i];
        cout << " from 1 to 5: ";
        cin >> ratings[i];
    }
    for (int i=0; i<SIZE; i++)
    {
        cout << "\n" << flavors[i];
        cout << ": ";
        cout << ratings[i];
    }

    return 0;
}
