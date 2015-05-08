#include <iostream>
#include <vector>

using namespace std;

vector<string> CollectVotes();
void CountVotes(vector<string> v);

int main()
{
    vector<string> votes = CollectVotes();
    CountVotes(votes);
}

vector<string> CollectVotes()
{
    vector<string> list;
    string userInput;
    while (1)
    {
        cout << "Pick Mac or PC: ";
        cin >> userInput;
        // validate the input!
        if (userInput == "DONE")
            break;
        list.push_back(userInput);
    }
    return list;
}

void CountVotes(vector<string> v)
{
    int macCount = 0;
    int pcCount = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v.at(i) == "Mac")
            macCount++;
        else if (v.at(i) == "PC")
            pcCount++;
    }
    if (macCount > pcCount)
        cout << "Mac wins!n";
    else if (pcCount > macCount)
        cout << "PC wins!n";
    else
        cout << "It's a tie.n";
}

}
