#ifndef PAWN_H
#define PAWN_H
#include<element.h>
#include<QGraphicsScene>
#include<QDebug>

#define PAWN_BLACK "\u265F"
#define PAWN_WHITE "\u2659"

class Pawn : public Element
{

   private:

public:
    Pawn();
    Pawn(int element_color);
    void getPawnScene(QGraphicsScene *scene);
};


#endif // PAWN_H
