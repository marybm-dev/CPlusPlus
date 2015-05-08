#include "lpclib.h"
#include "hgraphics.h"
#include "vector.h"
using namespace std;

void Setup(Vector<int> & v, int N);
void Swap(int & a, int & b);
void Print(Vector<int> & v);

void SelectionSort(Vector<int> & v);

int main()
{
    Vector<int> nums;
    Setup(nums, 10);
    Print(nums);
    GetLine();
    SelectionSort(nums);
}

void Setup(Vector<int> & v, int N)
{
    for (int i = 0; i < N; i++)
        v.add(RandomInt(0, 20));
}

void Swap(int & a, int & b)
{
    int originalA = a;
    a = b; /// I have a copy of the original a, so this is fine.
    b = originalA;
}

void Print(Vector<int> & v)
{
    foreach (int x in v)
    {
        cout << x << " ";
    }
    cout << endl;
}

void SelectionSort(Vector<int> & v)
{
    int numItemsSorted = 0;
    while (numItemsSorted < v.size() - 1) /// N-1 compares
    {
        int minValue = v[numItemsSorted];
        int minIndex = numItemsSorted;
        for (int i = numItemsSorted + 1; i < v.size(); i++) /// (N^2+N)/2 - 1
        {
            if (v[i] < minValue)   /// (N^2+N)/2 - 2
            {
                minValue = v[i];
                minIndex = i;
            }
        }
        Swap(v[minIndex], v[numItemsSorted]); /// N-2
        Print(v);
        GetLine();
        numItemsSorted++;
    }

}


}
