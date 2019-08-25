#ifndef ROOK_H
#define ROOK_H
#include<element.h>
#include<QGraphicsScene>
#include<QgraphicsView>
#include<QDebug>
#define UFT8_CODE "\u265C"
class Rook : public Element
{

   private:

public:
    Rook();
    Rook(int element_color);
    void getRookScene(QGraphicsScene *scene);
};

#endif // ROOK_H
