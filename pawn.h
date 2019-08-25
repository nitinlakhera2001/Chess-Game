#ifndef PAWN_H
#define PAWN_H
#include<element.h>
#include<QGraphicsScene>
#include<QDebug>
#define UFT8_CODE "\u265C"
class Pawn : public Element
{

   private:

public:
    Pawn();
    Pawn(int element_color);
    void getPawnScene(QGraphicsScene *scene);
};


#endif // PAWN_H
