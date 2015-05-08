#include "lpclib.h"
#include "vector.h"
using namespace std;

template <typename T>
struct HeapNode
{
   T data;
   int priority;
   HeapNode(T what=T(), int p=0)
    : data(what), priority(p) { }

};

template <typename T>
class PQueue /// priority queue implemented with a heap
{
    private:
        Vector<HeapNode<T> > heap;
    public:
        PQueue()
        {
        }
        void Enqueue(T item, int p)
        {
            HeapNode<T> node(item, p);
            heap.add(node);
            int i = heap.size()-1;
            while (1)
            {
                if (i == 0) // at the root
                    break;
                int parent = (i-1)/2;
                if (heap[i].priority < heap[parent].priority)
                {
                    swap(heap[i], heap[parent]);
                    i = parent;
                }
                else
                    break;
            }
        }
        T Dequeue()
        {
            T result = heap[0].data;
            /// swap last node into the root position
            heap[0] = heap[heap.size()-1];
            heap.removeAt(heap.size()-1);
            int i = 0;
            while (1)
            {
                int leftchild = i*2 + 1;
                int rightchild = i*2 + 2;
                if (leftchild >= heap.size())
                    break;
                else if (heap[i].priority < heap[leftchild].priority &&
                    (rightchild >= heap.size() ||
                        heap[i].priority < heap[rightchild].priority))
                    break;
                else if (rightchild >= heap.size() &&
                         heap[i].priority > heap[leftchild].priority)
                {
                    swap(heap[i], heap[leftchild]);
                    i = leftchild;
                }
                else if (heap[leftchild].priority == heap[rightchild].priority)
                {
                    swap(heap[i], heap[leftchild]);
                    i = leftchild;
                }
                else if (heap[leftchild].priority < heap[rightchild].priority)
                {
                    swap(heap[i], heap[leftchild]);
                    i = leftchild;
                }
                else
                {
                    swap(heap[i], heap[rightchild]);
                    i = rightchild;
                }
            }
            return result;
        }
};

int main()
{
    PQueue<string> line;
    line.Enqueue("A", 3);
    line.Enqueue("B", 2);
    line.Enqueue("C", 4);
    line.Enqueue("D", 2);
    line.Enqueue("E", 1);
    line.Enqueue("F", 3);
    for (int i = 0; i < 6; i++)
    {
        cout << line.Dequeue() << endl;
    }
}




}
