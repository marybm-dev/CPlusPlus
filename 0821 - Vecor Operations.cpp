#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> oceans;
    oceans.push_back("Pacific");
    oceans.push_back("Atlantic");
    oceans.push_back("Indian");
    oceans.push_back("Arctic");
    oceans.push_back("Chocolate");
    oceans.pop_back();
    cout << oceans.size() << endl;
    cout << oceans.at(0) << endl;
}

}
