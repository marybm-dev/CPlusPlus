#include <iomanip>
#include "vector.h"
#include "lpclib.h"
#include "scanner.h"
#include "map.h"
using namespace std;

int main()
{
    /*
    Map<int> wnums;
    wnums.put("Colin S", 10614028);
    wnums.put("Amy Q", 12345678);
    wnums.put("John H", 98989898);
    wnums.remove("Colin S");
    while (1)
    {
        cout << "Enter a name: ";
        string name = GetLine();
        if (wnums.containsKey(name) == true)
        {
            cout << "That person's W# is ";
            cout << wnums.get(name) << endl;
        }
        else
        {
            cout << "No record, sorry!" << endl;
        }
    }
    */

    Map<string> farsi;
    farsi.put("hi", "salam");
    farsi.put("cat", "pishi");
    farsi.put("dog", "sag");

    cout << "Enter a sentence: ";
    string sentence = GetLine();
    Scanner s;
    s.setInput(sentence);
    while (s.hasMoreTokens())
    {
        string token = s.nextToken();
        if (ispunct(token[0]))
        {
            cout << token;
        }
        else
        {
            if (farsi.containsKey(token))
                cout << farsi.get(token);
            else
                cout << token;
        }
    }
    return 0;
}

}
