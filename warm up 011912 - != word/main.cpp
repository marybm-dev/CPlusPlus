#include <iostream>

using namespace std;

int main()
{
    string word="";

    while (word != "tree" && word[0] != 'a')
    {
        cout << "Please enter a word: ";
        cin >> word;
    }
    return 0;
}
