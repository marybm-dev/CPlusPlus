#include "lpclib.h"
#include "vector.h"
#include <algorithm>
using namespace std;

struct SLLNode
{
    string data;
    SLLNode * next;
    SLLNode(string s)
    {
        data = s;
        next = NULL;
    }
};

class SLL
{
    private:
        SLLNode * start;
    public:
        SLL(); // create a new empty list
        void AddFront(string newdata);
        void AddBack(string newdata);
        void DeleteFront();
        void Print(); // traverse
};

int main()
{
    SLL mylist;
    mylist.AddBack("cat");
    mylist.AddBack("bat");
    mylist.AddBack("hat");
    mylist.Print();
}

SLL::SLL()
{
    start = new SLLNode("*dummynode*");
}

void SLL::AddFront(string newdata)
{
    SLLNode * newnode = new SLLNode(newdata);
    newnode->next = start->next;
    start->next = newnode;
}

void SLL::AddBack(string newdata)
{
    SLLNode * newnode = new SLLNode(newdata);
    SLLNode * current = start->next;
    if (current == NULL)
    {
        start->next = newnode;
    }
    else
    {
        while (current->next != NULL)
        {
            current = current->next;
        }
        /// current is now pointing to
        /// the last item!
        current->next = newnode;
    }
}

void SLL::DeleteFront()
{
    SLLNode * victim = start->next;
    if (victim != NULL)
    {
        start->next = victim->next;
        delete victim;
    }
    else
    {
        cout << "Warning: DeleteFront called on empty listn";
    }
}


void SLL::Print()
{
    SLLNode * current;
    current = start->next;
    while (current != NULL)
    {
        cout << current->data << endl;
        current = current->next;
    }
}
}
