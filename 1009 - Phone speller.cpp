#include "lpclib.h"
#include "lexicon.h"
#include "map.h"

Map<string> digitmap;
Lexicon lex("lexicon.dat");

void Setup();
void PhoneHelper(string sofar, string remain);
void PhoneSpell(string s);

int main()
{
    Setup();
    cout << "Type a phone number: ";
    string phonetext = GetLine();
    cout << "Here are some possible words that spells:n";
    PhoneSpell(phonetext);
}

void Setup()
{
    digitmap.add("0", "q");
    digitmap.add("1", "z");
    digitmap.add("2", "abc");
    digitmap.add("3", "def");
    digitmap.add("4", "ghi");
    digitmap.add("5", "jkl");
    digitmap.add("6", "mno");
    digitmap.add("7", "prs");
    digitmap.add("8", "tuv");
    digitmap.add("9", "wxy");
}

void PhoneHelper(string sofar, string remain)
{
    if (! lex.containsPrefix(sofar))
        return;
    if (lex.containsWord(sofar))
        cout << sofar << remain << endl;
    if (remain == "")
        return;

    string nextDigit = remain.substr(0, 1);
    string letterOptions = digitmap.get(nextDigit);

    for (int i = 0; i < letterOptions.length(); i++)
    {
        char letter = letterOptions[i];
        PhoneHelper(sofar + letter, remain.substr(1));
    }
}

void PhoneSpell(string s)
{
    PhoneHelper("", s);
}


}
