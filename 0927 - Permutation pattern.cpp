#include "lpclib.h"
#include "lexicon.h"
#include <cmath>
using namespace std;

Lexicon lex("lexicon.dat");

void PermuteHelper(string sofar, string remaining);
void Permute(string str);

void AnagramHelper(string sofar, string remaining);
void HiddenWords(string str);

int main()
{
    while (1)
    {
        cout << "> ";
        string phrase = GetLine();
        HiddenWords(phrase);
    }
}

void PermuteHelper(string sofar, string remaining)
{
    if (remaining == "")
    {
        cout << sofar << endl;
    }
    for (int i = 0; i < remaining.length(); i++)
    {
        char c = remaining[i];
        PermuteHelper(sofar + c,
            remaining.substr(0, i) + remaining.substr(i+1));
    }
}

void Permute(string str)
{
    PermuteHelper("", str);
}


void AnagramHelper(string sofar, string remaining)
{
    if (lex.containsPrefix(sofar) == false)
        return;
    if (sofar.length() > 2 && lex.containsWord(sofar))
        cout << sofar << endl;
    for (int i = 0; i < remaining.length(); i++)
    {
        char c = remaining[i];
        AnagramHelper(sofar + c,
            remaining.substr(0, i) + remaining.substr(i+1));
    }
}

void HiddenWords(string str)
{
    AnagramHelper("", str);
}

}
