#include "lpclib.h"
#include "vector.h"
using namespace std;

/// struct declaration for #6
struct Node
{
    int data;
    Node *left;
    Node *right;
};

/// 1)
bool IsMult7or10(int n)
{
    /// base case (success)
    if (n == 0)
        return true;
    /// base case (failure)
    if (n < 0)
        return false;

    /// recursive step
    return (IsMult7or10(n-7) || IsMult7or10(n - 10));
}

/// 2)
string RemoveSpaces(string s)
{
    /// base case
    if (s == "")
        return "";

    /// recursive step
    if (s.length() == 1)
    {
        if (s == " ")
            return "";
        else
            return s;
    }
    else
    {
        int mid = s.length() / 2;
        return (   RemoveSpaces(s.substr(0, mid))
                 + RemoveSpaces(s.substr(mid)));
    }
}

/// 3)
bool CanMakeSum(Vector<int> nums, int targetSum)
{
    if (nums.size() == 0)
    {
        if (targetSum == 0)
            return true;
        else
            return false;
    }

    int firstItem = nums[0];
    nums.removeAt(0);
    return (CanMakeSum( nums , targetSum - firstItem)
            ||
           CanMakeSum( nums , targetSum) );
}

/// 4) [See Picture]

int highest(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}

/// 6)
int Maximum (Node *n)
{
    /// base case
    if (n == NULL)
        return 0;

    /// recursive step
    return (highest(n->data, Maximum(n->left), Maximum(n->right)));
}

/// 7)

/// 0: cup
/// 1:
/// 2: dog
/// 3: cat
/// 4: rat
/// 5: pot
/// 6: cow

int main()
{

}

/**
OTHER NOTES - ON SORTING ALGORITHMS

Selection Sort
- Swap the lowest unsorted item to the front

5 4 3 9 2 8 1
 ... 1 swaps with 5
1 4 3 9 2 8 5
 ... 2 swap with 4
1 2 3 9 4 8 5
1 2 3 9 4 8 5 (3 swapped with itself!)
1 2 3 4 9 8 5
1 2 3 4 5 8 9
1 2 3 4 5 8 9 (8 swapped with itself!)

Merge Sort
- Keep dividing in half...
- ... then merge sublists
      543921
  543       921
 5   43    9   21
5   4  3  9   2  1
(Dividing done, now merge)
5   4  3  9   2  1
 5   34    9   12
  345       129
     123459

Quicksort
- Partition (and determine pivot)
- Use Quicksort on stuff below pivot
- Use Quicksort on stuff above pivot

Partition animation:
5 1 9 3 8 6 2 7
(5 is the pivot)

5 1 9 3 8 6 2 7
* -

5 1 7 3 8 6 2 9
* -           -

5 1 2 3 8 6 7 9
* -         - -

5 1 2 3 8 6 7 9
* - -       - -

5 1 2 3 8 6 7 9
* - - -     - -

5 1 2 3 6 8 7 9
* - - -   - - -

5 1 2 3 6 8 7 9
* - - - - - - -

3 1 2 5 6 8 7 9
- - - * - - - -

**/


}
