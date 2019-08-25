#ifndef BISHOP_H
#define BISHOP_H
#include<element.h>
#include<QGraphicsScene>
#include<QDebug>
#define UFT8_CODE "\u265C"
class Bishop : public Element
{

   private:

public:
    Bishop();
    Bishop(int element_color);
    void getBishopScene(QGraphicsScene *scene);
};


#endif // BISHOP_H
