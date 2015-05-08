#include <iomanip>
#include "vector.h"
#include "lpclib.h"
#include "scanner.h"
using namespace std;

int main()
{
    Scanner s;

    s.setSpaceOption(Scanner::IgnoreSpaces);
    s.setStringOption(Scanner::ScanQuotesAsStrings);
    s.setNumberOption(Scanner::ScanNumbersAsReals);

    cout << "Give me a quantity and a substance: ";
    string sentence = GetLine();
    s.setInput(sentence);
    while (s.hasMoreTokens())
    {
        string token = s.nextToken();
        if (isdigit(token[0]))
            cout << "Double number: " << 2 * StringToDouble(token) << endl;
        if (token[0] == '"')
            cout << "Found a string: " << token << endl;
    }
    return 0;
}
}
