#include <iostream>
#include <iomanip>
#include "vector.h"
#include "grid.h"
#include "lpclib.h"
#include "scanner.h"
#include "shapes.h"
using namespace std;

int main()
{
    Vector<string> animals;
    animals.add("cat");
    animals.add("dog");
    animals.add("pig");
    animals.add("chicken");
    foreach (string s in animals)
    {
        cout << "There was a farmer who had a " << s << endl;
    }

    Grid<string> ttt(3, 3);
    ttt.setAt(0, 0, "X");
    ttt.setAt(2, 1, "O");
    cout << "Checking if 3,3 is in bounds: ";
    cout << ttt.inBounds(-1, -1) << endl;
    foreach (string cell in ttt)
    {
        cout << "I found a " << cell << endl;
    }


    cout << "Enter a sentence: ";
    string sentence = GetLine();

    Scanner myScanner;
    myScanner.setInput(sentence);
    myScanner.setSpaceOption(Scanner::IgnoreSpaces);

    while (myScanner.hasMoreTokens())
    {
        string token = myScanner.nextToken();
        cout << "Next token: " << token << endl;
    }

    return 0;
}}
