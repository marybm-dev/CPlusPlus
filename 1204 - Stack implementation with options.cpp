#include "lpclib.h"
using namespace std;

//#define USE_ARRAY

#ifndef USE_ARRAY
template <typename T>
struct StackNode
{
    T data;
    StackNode<T> * next;
};
#endif

template <typename T>
class CS20Stack
{
    private:
#ifdef USE_ARRAY
        T * array;
        int top;
        int capacity;
#else
        StackNode<T> * top;
#endif

    public:
        CS20Stack();
        T Peek();
        T Pop();
        void Push(T item);
};

template <typename T>
CS20Stack<T>::CS20Stack()
{
#ifdef USE_ARRAY
    top = 0;
    capacity = 4;
    array = new T[capacity];
#else
    top = NULL;
#endif
}

template <typename T>
T CS20Stack<T>::Peek()
{
#ifdef USE_ARRAY
    return (array[top-1]);
#else
    return (top->data);
#endif
}

template <typename T>
T CS20Stack<T>::Pop()
{
    T result;
#ifdef USE_ARRAY
    result = array[top-1];
    top--;
#else
    result = top->data;
    StackNode<T> * victim = top;
    top = victim->next;
    delete victim;
#endif
    return result;
}

template <typename T>
void CS20Stack<T>::Push(T item)
{
#ifdef USE_ARRAY
    array[top] = item;
    top++;
    /// check if we need to grow the whole array
    if (top == capacity)
    {
        cout << "Doubling!n";
        T * newarray = new T[capacity * 2];
        for (int i = 0; i < capacity; i++)
            newarray[i] = array[i];
        delete [] array;
        array = newarray;
        capacity *= 2;
    }
#else
    StackNode<T> * newnode = new StackNode<T>;
    newnode->data = item;
    newnode->next = top;
    top = newnode;
#endif
}

int main()
{
    CS20Stack<string> s;
    s.Push("cat");
    s.Push("cat");
    s.Push("cat");
    s.Push("cat");
    s.Push("dog");
    s.Push("wolf");
    cout << s.Peek() << endl;
    cout << s.Pop() << endl;
    cout << s.Peek() << endl;

}

}
