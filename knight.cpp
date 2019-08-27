#include "knight.h"
#include<QDebug>


Knight::Knight()
{

}
Knight::Knight(int element_color)
{
    _elementColor = element_color;
    static int _blackKnightNum  = 0;
    static int _whiteKnightNum  = 0;

    if(_elementColor == ELEMENT_BLACK && _blackKnightNum == 0)
    {
        _xPos = 2 - 1;
        _yPos = 1 - 1;
        _uft8Code = KNIGHT_BLACK;
        _blackKnightNum++;
    }
    else if (_elementColor == ELEMENT_BLACK && _blackKnightNum == 1) {
        _xPos = 7 - 1;
        _yPos = 1 - 1;
        _uft8Code = KNIGHT_BLACK;
        _blackKnightNum++;
    }
    else if(_elementColor == ELEMENT_WHITE && _whiteKnightNum == 0)
    {
        _xPos = 2 - 1;
        _yPos = 8 - 1;
        _uft8Code = KNIGHT_WHITE;
        _whiteKnightNum++;
    }
    else if (_elementColor == ELEMENT_WHITE && _whiteKnightNum == 1) {
        _xPos = 7 - 1;
        _yPos = 8 - 1;
        _uft8Code = KNIGHT_WHITE;
        _whiteKnightNum++;
    }
    else
        _uft8Code = "\u2663";
    _element = new QGraphicsTextItem;
    elementSetup();
    setPosition(_xPos,_yPos);
}
void Knight :: getKnightScene(QGraphicsScene *scene)
{

    scene -> addItem(_element);
}

