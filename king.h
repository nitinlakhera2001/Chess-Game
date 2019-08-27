#ifndef KING_H
#define KING_H
#include<QGraphicsScene>
#include "element.h"
#define KING_BLACK "\u265A"
#define KING_WHITE  "\u2654"

class King : public Element
{
public:
    King();
    King(int element_color);
    King(int x,int y, int element_color);
    King(int x,int y, int element_color,QGraphicsScene *scene);

    void getKingScene(QGraphicsScene *scene);
    int move(int x,int y);
    bool checkKingRule();


protected:
    //uft8, _xPos and _yPos are inherited from element class. No need to declare


private:
    QGraphicsScene * _kingScene = new QGraphicsScene();


};

#endif // KING_H
