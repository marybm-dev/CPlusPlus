#ifndef ENTITY_H
#define ENTITY_H


class Entity
{
    protected:
        int x;
        int y;
    public:
        Entity(int xcoord, int ycoord);
        virtual void Move()=0;
        virtual void Draw()=0;
};

#endif // ENTITY_H
