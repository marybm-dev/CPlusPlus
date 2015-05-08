#include <iostream>
#include <vector>
using namespace std;

class Beverage
{
    protected:
        string name;
        int ounces;
    public:
        Beverage(string n, int oz);
        virtual void Drink()=0;
};
Beverage::Beverage(string n, int oz)
{
    name = n;
    ounces = oz;
}

class Coffee : public Beverage
{
    public:
        Coffee (string n, int oz);
        virtual void Drink();
};
Coffee::Coffee(string n, int oz) : Beverage (n, oz)
{
    cout << ounces << "oz. " << name << " Beverage created\n";
}
void Coffee::Drink()
{
    cout << "You drank " << ounces << " oz. of " << name << ".\n";
}

class Latte : public Coffee
{
    public:
    Latte(string n, int oz);
    virtual void Drink ();
};
Latte::Latte(string n, int oz) : Coffee (n, oz)
{
    cout << ounces << "oz. " << name << " Latte Beverage created\n";
}
void Latte::Drink()
{
    cout << "You drank " << ounces << " oz. of " << name << " latte.\n";
}
int main()
{
    vector<Beverage *> drinkList;
    drinkList.push_back(new Coffee ("Coffee", 8));
    drinkList.push_back(new Latte ("Vanilla", 8));
    drinkList.push_back(new Coffee ("Coffee", 12));
    drinkList.push_back(new Latte ("Mocha", 8));
    for (int i=0; i<drinkList.size(); i++)
    {
        drinkList[i]->Drink();
    }
}
