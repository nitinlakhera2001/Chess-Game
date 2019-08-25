#include "pawn.h"
#include<QDebug>

#define PAWN_BLACK "\u265F"
#define PAWN_WHITE "\u2659"
Pawn::Pawn()
{

}
Pawn::Pawn(int element_color)
{
    _elementColor = element_color;
    static int _blackPawnNum  = 0;
    static int _whitePawnNum  = 0;
    qDebug() << "inside Pawn constructor:Arg: element_color";

    if(_elementColor == ELEMENT_BLACK && _blackPawnNum <8 )
    {
        _xPos = _blackPawnNum;// - 1;
        _yPos = 2 - 1;

        _uft8Code = PAWN_BLACK;
        _blackPawnNum++;
    }

    else if(_elementColor == ELEMENT_WHITE && _whitePawnNum < 8)
    {
        _xPos = _whitePawnNum;
        _yPos = 7 - 1;
        _uft8Code = PAWN_WHITE;
        _whitePawnNum++;
    }
    else
        _uft8Code = "\u2663";

    _element = new QGraphicsTextItem;
    elementSetup();
    setPosition(_xPos,_yPos);
}
void Pawn :: getPawnScene(QGraphicsScene *scene)
{

    scene -> addItem(_element);
}

