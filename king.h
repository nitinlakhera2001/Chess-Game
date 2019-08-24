#ifndef KING_H
#define KING_H
#include<QGraphicsScene>
#include <QGraphicsView>
#include "element.h"
#define BLACK_KING 1
class King : public Element
{
public:
    King();
    King(int element_color);
    King(int x,int y, int element_color);
    King(int x,int y, int element_color,QGraphicsScene *scene);

    void getKingScene(QGraphicsScene *scene);
    void viewKing(QGraphicsView *view);
    int move(int x,int y);
    bool checkKingRule();


protected:
    //uft8, _xPos and _yPos are inherited from element class. No need to declare


private:
    QGraphicsScene * _kingScene = new QGraphicsScene();


};

#endif // KING_H
