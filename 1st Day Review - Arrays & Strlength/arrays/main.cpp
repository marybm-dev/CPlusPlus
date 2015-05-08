#include <iostream>

using namespace std;

int main()
{
    const int NUM_OF_PRICES = 5;
    float price[NUM_OF_PRICES];
    cout << "What are the " << NUM_OF_PRICES << " prices?" << endl;
    cin >> price [0];
    cin >> price [1];
    cin >> price [2];
    cin >> price [3];
    cin >> price [4];
    double total = 0;
    double average;
    for (int count =0; count < NUM_OF_PRICES; count++)
        total += price [count];
        average = total / NUM_OF_PRICES;
    cout << "The average of the prices is " << average << " " <<endl;
    return 0;
}
