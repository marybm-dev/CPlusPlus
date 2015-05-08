#include "lpclib.h"
using namespace std;

void Sentence();
void Verb();
void Noun();
void Adj();
void NounPhrase();
void Place();

int main()
{
    while (1)
    {
        cout << "....n";
        GetLine();
        Sentence();
    }
    return 0;
}

void Sentence()
{
    NounPhrase();
    cout << " ";
    Verb();
    cout << " ";
    NounPhrase();
}

void NounPhrase()
{
    int r = RandomInt(1, 6);
    if (r <= 3)
    {
        Adj();
        cout << " ";
        Noun();
    }
    else if (r == 4)
    {
        Adj();
        cout << " ";
        NounPhrase();
    }
    else
    {
        NounPhrase();
        cout << "'s ";
        Noun();
    }
}

void Verb()
{
    string verbs[4] = { "eats", "attacks", "hugs", "greets" };
    int r = RandomInt(0, 3);
    cout << verbs[r];
}

void Noun()
{
    string nouns[4] = { "carrot", "pony", "pizza", "kid" };
    int r = RandomInt(0, 3);
    cout << nouns[r];
}

void Adj()
{
    string adjs[6] = { "happy", "purple", "loud",
                        "sticky", "fuzzy", "awesome" };
    int r = RandomInt(0, 5);
    cout << adjs[r];
}

void Place()
{
    string places[6] = { "kitchen", "garden", "cave",
                        "refrigerator", "school"};
    int r = RandomInt(0, 5);
    cout << places[r];
}



}
