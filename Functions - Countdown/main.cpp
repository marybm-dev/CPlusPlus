#include <iostream>
using namespace std;

// prototype
void Countdown (int start, string sound);

int main()
{
    // call
    Countdown (10, "Blastoff!");

    // another call
    Countdown (5, "Bingo!");

}

//definition
void Countdown (int start, string sound)
{
    for (int i= start; i>0; i--)
    {
        cout << i << "..." << endl;
    }
    cout << sound << endl;

}
