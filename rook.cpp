#include "rook.h"
#include<QDebug>

#define ROOK_BLACK "\u265C"
#define ROOK_WHITE "\u2656"
Rook::Rook()
{

}
Rook::Rook(int element_color)
{
    _elementColor = element_color;
    static int _blackRookNum  = 0;
    static int _whiteRookNum  = 0;
    qDebug() << "inside Rook constructor:Arg: element_color";

    if(_elementColor == ELEMENT_BLACK && _blackRookNum == 0)
    {
        _xPos = 1 - 1;
        _yPos = 1 - 1;
        _uft8Code = ROOK_BLACK;
        _blackRookNum++;
    }
    else if (_elementColor == ELEMENT_BLACK && _blackRookNum == 1) {
        _xPos = 8 - 1;
        _yPos = 1 - 1;
        _uft8Code = ROOK_BLACK;
        _blackRookNum++;
    }
    else if(_elementColor == ELEMENT_WHITE && _whiteRookNum == 0)
    {
        _xPos = 1 - 1;
        _yPos = 8 - 1;
        _uft8Code = ROOK_WHITE;
        _whiteRookNum++;
    }
    else if (_elementColor == ELEMENT_WHITE && _whiteRookNum == 1) {
        _xPos = 8 - 1;
        _yPos = 8 - 1;
        _uft8Code = ROOK_WHITE;
        _whiteRookNum++;
    }
    else
        _uft8Code = "\u2663";
    _element = new QGraphicsTextItem;
    elementSetup();
    setPosition(_xPos,_yPos);
}
void Rook :: getRookScene(QGraphicsScene *scene)
{

    scene -> addItem(_element);
}

