#ifndef BISHOP_H
#define BISHOP_H
#include<element.h>
#include<QGraphicsScene>
#include<QDebug>

#define BISHOP_BLACK "\u265D"
#define BISHOP_WHITE "\u2657"

class Bishop : public Element
{

   private:

public:
    Bishop();
    Bishop(int element_color);
    void getBishopScene(QGraphicsScene *scene);
};


#endif // BISHOP_H
