#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include "lpclib.h"
using namespace std;

int main()
{
    map<string, string> words;
    words["cat"] = "gato";
    words["hello"] = "hola";
    words["white"] = "blanco";
    words["orange"] = "naranja";
    words["brown"] = "cafe";

    cout << "Enter a sentence, one word per line:\n";
    vector<string> sentence;
    while (1)
    {
        string input = GetLine();
        if (input == ".")
            break;
        sentence.push_back(input);

    }

    map<string, string>::iterator it;
    for (int i=0; i<sentence.size(); i++)
    {

        it = words.find(sentence[i]);
        if (it != words.end())
            cout << words[sentence[i]] << endl;
        else
            cout << sentence[i] << endl;
    }
}
