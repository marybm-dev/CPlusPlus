#include "RandomWheel.h"

//      int numberOfItems;
//      int currentItem;
//      vector<int> itemValues;
//      vector<string> itemLabels;

RandomWheel::RandomWheel(int itemCount, int value[], string labels[])
{
    srand(time(0));
    numberOfItems = itemCount;
    currentItem = 0;
    for (int i=0; i<itemCount; i++)
    {
        itemValues.push_back(value[i]);
        itemLabels.push_back(labels[i]);
    }
}
void RandomWheel::Spin()
{
    currentItem = rand()%numberOfItems;
}
int RandomWheel::GetCurrentValue() const
{
    return (itemValues[currentItem]);
}
string RandomWheel::GetCurrentLabel() const
{
    return (itemLabels[currentItem]);
}
