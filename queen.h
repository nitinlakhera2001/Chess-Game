#ifndef QUEEN_H
#define QUEEN_H
#include<QGraphicsScene>
#include <QGraphicsView>
#include "element.h"

#define QUEEN_BLACK "\u265B"
#define QUEEN_WHITE  "\u2655"

class Queen : public Element
{
public:
    Queen();
    Queen(int element_color);
    Queen(int x,int y, int element_color);
    Queen(int x,int y, int element_color,QGraphicsScene *scene);

    void getQueenScene(QGraphicsScene *scene);
    int move(int x,int y);
    bool checkQueenRule();


protected:
    


private:
    QGraphicsScene * _QueenScene = new QGraphicsScene();


};

#endif
