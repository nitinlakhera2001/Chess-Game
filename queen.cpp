#include "queen.h"
#include<QDebug>
#define QUEEN_BLACK "\u265B"
#define QUEEN_WHITE  "\u2655"
Queen::Queen()
{
    qDebug() << "inside Queen default constructor";
    _xPos = 0;
    _yPos = 0;
    _elementColor = ELEMENT_BLACK;
    _uft8Code =  "\u2663";
    elementSetup();
    qDebug() <<"default Queen constructor";

}
Queen::Queen(int element_color)
{
    qDebug() << "inside Queen constructor:Arg: element_color";
    _elementColor = element_color;

    if(_elementColor == ELEMENT_BLACK)
    {
        _xPos = 4 - 1;
        _yPos = 1 - 1;
        _uft8Code = QUEEN_BLACK;

    }
    else if(_elementColor == ELEMENT_WHITE)
    {
        _xPos = 4 - 1;
        _yPos = 8 - 1;
        _uft8Code = QUEEN_WHITE;
    }
    else
        _uft8Code = "\u2663";

    _element = new QGraphicsTextItem;
    elementSetup();
    setPosition(_xPos,_yPos);
}



void Queen :: getQueenScene(QGraphicsScene *scene)
{
    qDebug() <<" inside addToScene";
    scene -> addItem(_element);
}




