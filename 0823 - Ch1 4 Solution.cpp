#include <iostream>

using namespace std;

int GetInt(string prompt);
int SumOfInts(int n);

int GetInt(string prompt)
{
    int evenInt = 0;
    cout << prompt;
    cin >> evenInt;
    if(evenInt < 0)
        GetInt("Not a positive IntegernPlease try again: ");
    else return evenInt;
}
int SumOfInts(int n)
{
    int sum = 0, term = 1;
    for(int i = 1; i <= n; i++) // reps
    {
        sum = sum + term;       //This keeps track of the total.
        cout << term << " + ";
        term += 2;
                    //This keeps track of the current integer.
    }
    return sum;
}

int main()
{
    cout <<  " = " << SumOfInts(GetInt("Please Enter a positive Integer: "));
    return 0;
}
}
