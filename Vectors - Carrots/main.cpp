#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int SIZE =5;

int main()
{
    // list is a vector of strings, .. all set equal to potato
    vector<string> list(5, "potato");

    // set element 2 equal to beet.
    list[2] = "beet";

    // append carrot to end of vector
    list.push_back("carrot");

    //print all elementso f vector
    for (int i =0; i < list.size(); i++)
    {
        cout << list[i] << endl;
    }

    //list original data
    list.pop_back();
    cout << "\n--------------\n";

    //print all elementso f vector
    for (int i =0; i < list.size(); i++)
    {
        cout << list[i] << endl;
    }

    sort (list.begin(), list.end());

    //list original data
    cout << "\n--------------\n";

    //print all elementso f vector
    for (int i =0; i < list.size(); i++)
    {
        cout << list[i] << endl;
    }

    return 0;
}
