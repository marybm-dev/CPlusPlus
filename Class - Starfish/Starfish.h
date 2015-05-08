#ifndef STARFISH_H
#define STARFISH_H


class Starfish
{
    public:
    // DEFAULT CONSTRUCTOR
        Starfish();
    // CONSTRUCTOR WITH ARGUMENT
        Starfish(int armsRequested);
    // ACCESSOR
        void Describe() const;
    private:
        int numberOfArms;
};

#endif // STARFISH_H
