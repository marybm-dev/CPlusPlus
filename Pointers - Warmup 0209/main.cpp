#include <iostream>

using namespace std;

class Hoodie
{
};

int main()
{
    int num1 = 5;
    int* ptr1;
    ptr1 = &num1;

    int* ptr2;
    ptr2 = new int;
    delete ptr2;

    Hoodie* ptr3;
    ptr3 = new Hoodie;
    delete ptr3;
}
