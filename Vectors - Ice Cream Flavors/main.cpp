#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> flavors;
    string response;
    cout << "What ice cream flavors do you want to order? Type END to exit" << endl;

    while(response != "END")
    {
        cin >> response;
        flavors.push_back(response);
    }

    sort(flavors.begin(), flavors.end());

    for (int i=0; i<flavors.size(); i++)
    {
        cout << flavors[i];
    }


    return 0;
}
