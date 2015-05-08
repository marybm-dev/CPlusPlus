#include <iostream>
using namespace std;

int GetInput(string prompt);
void LoopThroughRange(int low, int high);
bool CheckPrime(int target);

int main()
{
    int start = GetInput("Starting number? ");
    int end = GetInput("Ending number? ");
    LoopThroughRange(start, end);
}

int GetInput(string prompt)
{
    int input;
    cout << prompt;
    cin >> input;
    return input;
}

void LoopThroughRange(int low, int high)
{
    for (int num = low; num <= high; num++)
    {
        if (CheckPrime(num) == true)
            cout << num << " is primen";
    }
}

bool CheckPrime(int target)
{
    for (int possibility = 2; possibility <= (target/2); possibility++)
    {
        //if (target is divisible by possibility)
        if (target % possibility == 0)
        {
            return false;
        }
    }
    return true;
}



}
