#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string fname, lname;
    cout << "What is your first name?" << endl;
    cin >> fname;
    cout << "What is your last name?" << endl;
    cin >> lname;
    int flength, llength;
    flength = fname.length();
    llength = lname.length();
    if (flength > llength)
    {
        cout << "Your fist name is longer" << endl;
    }
    else
    {
        cout << "Your last name is longer" << endl;
    }

    return 0;
}
