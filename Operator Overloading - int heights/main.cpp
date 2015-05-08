#include <iostream>
using namespace std;

class Height
{
  private:
    int feet;
    int inches;
    void Normalize();
  public:
    Height(int numFeet, int numInches);
    Height(int totInches);
    void Describe();
    Height operator+(Height rightside);
};

int main()
{
    Height bob(5,14);
    Height mary(70);
    bob.Describe();
    mary.Describe();
    (bob + mary).Describe();
}

Height Height::operator+(Height rightside)
{
    int newHeightTotal;
    newHeightTotal = (feet*12) + inches + (rightside.feet*12) + rightside.inches;
    Height jointHeights(newHeightTotal);
    return (jointHeights);
}

void Height::Normalize()
{
    int total = feet * 12 + inches;
    feet = total / 12;
    inches = total % 12;
}

Height::Height(int numFeet, int numInches)
{
    feet = numFeet;
    inches = numInches;
    Normalize();
}

Height::Height(int totInches)
{
    inches = totInches;
    feet = 0;
    Normalize();
}

void Height::Describe()
{
    cout << feet << "'" << inches << "''" << endl;
}
