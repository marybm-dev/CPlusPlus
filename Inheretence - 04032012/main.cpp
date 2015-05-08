#include <iostream>
using namespace std;

class Greeter
{
    protected:
        string name;
    public:
        Greeter() {};
        virtual void AskUserName()=0;
        virtual void GreetUser()=0;
};
class EnglishGreeter : public Greeter
{
    public:
        EnglishGreeter() : Greeter() {}
        virtual void AskUserName()
        { cout << "What is your name? "; cin >> name; }
        virtual void GreetUser()
        { cout << "\nHello, " << name << endl; }
};

class SpanishGreeter : public Greeter
{
    public:
        SpanishGreeter() : Greeter () {}
        virtual void AskUserName()
        { cout << "\nComo te llamas? "; cin >> name; }
        virtual void GreetUser()
        { cout << "\nHola, " << name << endl; }
};
int main()
{
    EnglishGreeter Bob;
    Bob.AskUserName();
    Bob.GreetUser();
    SpanishGreeter Jose;
    Jose.AskUserName();
    Jose.GreetUser();
}
