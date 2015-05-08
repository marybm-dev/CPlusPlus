#ifndef ENTITY_H
#define ENTITY_H


class Entity
{
    protected:
        int x;
        int y;
    public:
        Entity (int xx, int yy);
        virtual void Draw() = 0;
        virtual void Move() = 0;
};

#endif // ENTITY_H
