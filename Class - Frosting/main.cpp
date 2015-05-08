#include <iostream>
#include "frosting.h"
using namespace std;

int main()
{
    frosting f1;
    f1.Describe();
    frosting f2(5);
    f2.Describe();
    frosting f3("pink", 3);
    f3.Describe();
    frosting f4("purple");
    f4.Describe();
}
