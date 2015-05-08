#include "lpclib.h"
#include "grid.h"
#include "vector.h"
#include <cmath>
using namespace std;

void MakeChange(int remain, Vector<int> & units);
void ChangeHelper(int remain, Vector<int> & units, string sequence);

int main()
{
    Vector<int> bills;
    bills.add(3);
    bills.add(5);
    bills.add(10);
    bills.add(20);

    while (1)
    {
        cout << "Give me an amount of money: $";
        int total = GetInt();
        MakeChange(total, bills);
    }
    return 0;
}

void ChangeHelper(int remain, Vector<int> & units, string sequence, int lastUsed)
{
    if (remain == 0)
        cout << sequence << endl;
    else
    {
        foreach (int amount in units)
        {
            if (amount <= remain && amount >= lastUsed)
            {
                ChangeHelper(remain - amount,
                             units, sequence + " " + IntToString(amount), amount);
            }
        }
    }
}

void MakeChange(int remain, Vector<int> & units)
{
    ChangeHelper(remain, units, "", 0);

}

}
