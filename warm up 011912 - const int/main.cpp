#include <iostream>

using namespace std;

int main()
{
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 21;

    int num;
    for (num=MIN_NUMBER; num<=MAX_NUMBER; num+=2)
    {
        cout << num << endl;
    }
    return 0;
}
