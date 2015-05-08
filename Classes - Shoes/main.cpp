#include <iostream>

using namespace std;

class Shoes
{
    private:
    int howMany;
    bool hasLaces;

    public:
    Shoes();
    void totalShoes(int pairs, int toLace);
    void displayTotalShoes() const;
};

int main()
{
    Shoes shoe1;
    int amountToBeEntered;
    int laces;
    cout << "How many pairs of shoes do you have: ";
    cin >> amountToBeEntered;
    cout << "\nHow many have laces: ";
    cin >> laces;
    shoe1.totalShoes(amountToBeEntered, laces);
    shoe1.displayTotalShoes();
}

Shoes::Shoes()
{
    howMany = 2;
    hasLaces = true;
}

void Shoes::totalShoes(int amountOfPairs, int ties)
{
    howMany *= amountOfPairs;
    if (ties == 0)
    {
        hasLaces = false;
        cout << "\nYou have no shoes that lace.\n";
    }
    else
    {
        ties *= 2;
        cout << "\nYou have " << ties << " shoes that tie.\n";
    }
}

void Shoes::displayTotalShoes() const
{
    cout << "\nThere are " << howMany << " total shoes.\n";
}
