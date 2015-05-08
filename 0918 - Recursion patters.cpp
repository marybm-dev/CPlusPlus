#include <iostream>
#include <iomanip>
#include "lpclib.h"
#include "stack.h"
using namespace std;

bool Check(string expr);

int main()
{
    while (1)
    {
        cout << "Type an expression: ";
        string input = GetLine();
        if (Check(input))
            cout << "Goodn";
        else
            cout << "BAD - unbalanced!n";
    }
}

bool Check(string expr)
{
    Stack<char> symbols;
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(')
        {
            symbols.push('(');
        }
        else if (expr[i] == ')')
        {
            if (symbols.isEmpty())
            {
                return false;
            }
            else if (symbols.peek() == '(')
                symbols.pop();
            else
            {
                return false;
            }
        }
    }
    return (symbols.isEmpty());
}}
