#include <iomanip>
#include "vector.h"
#include "lpclib.h"
#include "scanner.h"
#include "map.h"
using namespace std;

int main()
{
    Map<int> wordCounts;

    while (1)
    {
        cout << "Next word: ";
        string word = GetLine();
        if (word == "DONE")
            break;
        if (wordCounts.containsKey(word) == false)
        {
            //wordCounts.put(word, 1);
            wordCounts[word] = 1;
        }
        else
        {
            wordCounts[word] ++;
        }
    }

    // now report all words and counts
    foreach (string s in wordCounts)
    {
        cout << s << ":" << wordCounts[s] << endl;
    }
}

}
