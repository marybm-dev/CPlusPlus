#include <iostream>

using namespace std;

class LegoPerson
{
    private:
        char gender; // M or F
        string job;
    public:
        // add constructor with defaults
        LegoPerson(char sex ='M', string profession = "Builder");
        LegoPerson(string housewife);
        // add one accessor
        void DisplayLegoPerson() const;
};

int main()
{
    // create a few LegoPerson objects
    LegoPerson lego1;
    lego1.DisplayLegoPerson();
    LegoPerson lego2("Cook");
    lego2.DisplayLegoPerson();
    LegoPerson lego3 ("Mother");
    lego3.DisplayLegoPerson();
    // using different values
}

LegoPerson::LegoPerson(char sex, string profession)
{
    gender = sex;
    job = profession;
}
LegoPerson::LegoPerson(string housewife)
{
    if (housewife == "Cook")
    {
        gender = 'F'; job = "Baker";
    }
    else if (housewife == "Mother")
    {
        gender = 'F'; job = "Babysitter";
    }
}
void LegoPerson::DisplayLegoPerson() const
{
    cout << "LegoPerson is " << gender << " and their profession is " << job << ".\n";
}
