#ifndef KNIGHT_H
#define KNIGHT_H
#include<element.h>
#include<QGraphicsScene>
#include<QDebug>
#define UFT8_CODE "\u265C"
class Knight : public Element
{

   private:

public:
    Knight();
    Knight(int element_color);
    void getKnightScene(QGraphicsScene *scene);
};

#endif // Knight_H
