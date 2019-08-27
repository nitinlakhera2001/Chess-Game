#ifndef KNIGHT_H
#define KNIGHT_H
#include<element.h>
#include<QGraphicsScene>
#include<QDebug>

#define KNIGHT_BLACK "\u265E"
#define KNIGHT_WHITE "\u2658"

class Knight : public Element
{

   private:

public:
    Knight();
    Knight(int element_color);
    void getKnightScene(QGraphicsScene *scene);
};

#endif // Knight_H
