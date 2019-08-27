#include "bishop.h"
#include<QDebug>


Bishop::Bishop()
{

}
Bishop::Bishop(int element_color)
{
    _elementColor = element_color;
    static int _blackBishopNum  = 0;
    static int _whiteBishopNum  = 0;

    if(_elementColor == ELEMENT_BLACK && _blackBishopNum == 0)
    {
        _xPos = 3 - 1;
        _yPos = 1 - 1;
        _uft8Code = BISHOP_BLACK;
        _blackBishopNum++;
    }
    else if (_elementColor == ELEMENT_BLACK && _blackBishopNum == 1) {
        _xPos = 6 - 1;
        _yPos = 1 - 1;
        _uft8Code = BISHOP_BLACK;
        _blackBishopNum++;
    }
    else if(_elementColor == ELEMENT_WHITE && _whiteBishopNum == 0)
    {
        _xPos = 3 - 1;
        _yPos = 8 - 1;
        _uft8Code = BISHOP_WHITE;
        _whiteBishopNum++;
    }
    else if (_elementColor == ELEMENT_WHITE && _whiteBishopNum == 1) {
        _xPos = 6 - 1;
        _yPos = 8 - 1;
        _uft8Code = BISHOP_WHITE;
        _whiteBishopNum++;
    }
    else
        _uft8Code = "\u2663";
    _element = new QGraphicsTextItem;
    elementSetup();
    setPosition(_xPos,_yPos);
}
void Bishop :: getBishopScene(QGraphicsScene *scene)
{

    scene -> addItem(_element);
}

