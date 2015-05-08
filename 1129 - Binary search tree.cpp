#include "lpclib.h"
#include "set.h"
using namespace std;



int Foo()
{
    int n = 3.14159 * 99;
    return (n);
}

template <typename T>
struct BSTNode
{
    T data;
    BSTNode<T> * left;
    BSTNode<T> * right;
    BSTNode(T thedata)
    {
        data = thedata;
        left = right = NULL;
    }
};

template <typename T>
class SearchTree
{
    private:
        BSTNode<T> * root;
    public:
        SearchTree() { root = NULL; }
        void Add(T item);
        void Delete(T item);

        // DON'T KEEP THIS!
        void DeleteSmallestItem();

        BSTNode<T> * Find(T item);
        void Print();
        void TestSmallest()
        {
            cout << "smallest element is: "
                << SmallestNodeBelow(root)->data << endl;

        }
    private:
        BSTNode<T> * & FindNode(T item);
        BSTNode<T> * & SmallestNodeBelow(BSTNode<T> * subtreeRoot);

};

template <typename T>
BSTNode<T> * & SearchTree<T>::FindNode(T item)
{
    if (root == NULL || root->data == item)
        return root;

    BSTNode<T> * current = root;
    while (1)
    {
        if (item < current->data)
        {
            if (current->left == NULL || current->left->data == item)
                return (current->left);
            else
                current = current->left;
        }
        else
        {
            if (current->right == NULL || current->right->data == item)
                return (current->right);
            else
                current = current->right;
        }
    }
}


template <typename T>
void SearchTree<T>::Add(T item)
{
    BSTNode<T> * & result = FindNode(item);
    result = new BSTNode<T>(item);
}

template <typename T>
void SearchTree<T>::Delete(T item)
{
    BSTNode<T> * & victim = FindNode(item);
    if (victim == NULL)
        return;
    if (victim->left == NULL)
    {
        // SPECIAL CASE
    }
    else if (victim->right == NULL)
    {

    }
    else
    {
        if (victim->right->left == NULL)
        {
            // SPECIAL CASE
        }
        else
        {
            BSTNode<T> * & ptrToSmallest = SmallestNodeBelow(victim->right);
            BSTNode<T> * smallest = ptrToSmallest;
            ptrToSmallest = smallest->right;
            smallest->left = victim->left;
            smallest->right = victim->right;
            delete victim;
            victim = smallest;
        }
    }
}

template <typename T>
BSTNode<T> * SearchTree<T>::Find(T item)
{
    return (FindNode(item));
}

template <typename T>
void PrintHelper(BSTNode<T> * ptr)
{
    if (ptr == NULL)
        return;
    PrintHelper(ptr->left);
    cout << ptr->data << endl;
    PrintHelper(ptr->right);
}

template <typename T>
void SearchTree<T>::Print()
{
    PrintHelper(root);
}

template <typename T>
void SearchTree<T>::DeleteSmallestItem()
{
    BSTNode<T> * & result = SmallestNodeBelow(root);
    delete result;
    result = NULL;
}

template <typename T>
BSTNode<T> * & SearchTree<T>::SmallestNodeBelow(BSTNode<T> * subtreeRoot)
{
    BSTNode<T> * current = subtreeRoot;
    while (1)
    {
        if (current->left->left == NULL)
            break;
        else
            current = current->left;
    }
    return (current->left);
}

int main()
{
    SearchTree<int> nums;
    nums.Add(11);
    nums.Add(9);
    nums.Add(7);
    nums.Add(10);
    nums.Add(15);
    nums.Add(20);
    nums.Add(12);
    nums.Add(8);
    nums.Add(2);
    nums.Add(17);
    nums.Add(13);

    nums.Print();
    nums.Delete(15);
    cout << "nn";
    nums.Print();

}


}
