#ifndef ROOK_H
#define ROOK_H
#include<element.h>
#include<QGraphicsScene>
#include<QDebug>

#define ROOK_BLACK "\u265C"
#define ROOK_WHITE "\u2656"

class Rook : public Element
{

   private:

public:
    Rook();
    Rook(int element_color);
    void getRookScene(QGraphicsScene *scene);
};

#endif // ROOK_H
