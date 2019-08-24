#include "king.h"
#include<QDebug>
King::King()
{
    qDebug() << "inside King default constructor";
    _xPos = 0;
    _yPos = 0;
    _elementColor = ELEMENT_BLACK;
    _uft8Code =  "\u2663";
    elementSetup();
    qDebug() <<"default king constructor";

}
King::King(int element_color)
{
    qDebug() << "inside King constructor:Arg: element_color";
    _elementColor = element_color;

    if(_elementColor == ELEMENT_BLACK)
    {
        _xPos = 5 - 1;
        _yPos = 1 - 1;
        _uft8Code = "\u265A";

    }
    else if(_elementColor == ELEMENT_WHITE)
    {
        _xPos = 5 - 1;
        _yPos = 8 - 1;
        _uft8Code = "\u2654";
    }
    else
        _uft8Code = "\u2663";

    _element = new QGraphicsTextItem;
    elementSetup();
    setPosition(_xPos,_yPos);
}
King :: King(int x,int y,int element_color)
{
    qDebug() << "inside King 1 constructor";

    _xPos = x;
    _yPos = y;
    _elementColor = element_color;

    if(_elementColor == ELEMENT_BLACK)
    {
        _xPos = 5 - 1;
        _yPos = 1 - 1;
        _uft8Code = "\u265A";

    }
    else if(_elementColor == ELEMENT_WHITE)
    {
        _xPos = 8 - 5;
        _yPos = 8 - 1;
        _uft8Code = "\u2654";
    }
    else
        _uft8Code = "\u2663";

    _element = new QGraphicsTextItem;
    elementSetup();
    setPosition(_xPos,_yPos);
}
King :: King(int x,int y, int element_color,QGraphicsScene *scene)
{
    qDebug() << "inside King 2 constructor";
    _xPos = x;
    _yPos = y;
    _elementColor = element_color;
    if(_elementColor == ELEMENT_BLACK)
        _uft8Code = "\u265A";
    else
        _uft8Code = "\u2654";
    _element = new QGraphicsTextItem;
    elementSetup();
    setPosition(_xPos,_yPos);
    scene -> addItem(_element);
}

void King :: getKingScene(QGraphicsScene *scene)
{
    qDebug() <<" inside addToScene";
    scene -> addItem(_element);
}

void King::viewKing(QGraphicsView *view)
{
    QGraphicsScene *temp_scene = new QGraphicsScene();
    temp_scene->addItem(_element);
    view-> setScene(temp_scene);
}

int King::move(int x, int y)
{
    if(abs(x - _xPos) == 0 && abs(y - _yPos) == 0)
        {
            return false;
        }
        else if(abs(x - _xPos) <= 1 && abs(y - _yPos) <= 1)
            return true;
        else
            return false;
}

