#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include "lpclib.h"
using namespace std;

int main()
{
    set<string> monsters;
    monsters.insert("zombie");
    monsters.insert("cookiee");
    monsters.insert("vampire");
    monsters.insert("hydra");
    monsters.insert("creeper");
    monsters.insert("attack rabbit");
    set<string>::iterator it;
    it = monsters.begin();
    int rand = RandomInt(0,monsters.size()-1);
    for (int i = 1; i <= rand ; i++)
    {
        it++;
    }
    cout << (*it) << endl;
}
