#include "element.h"
#include<QGraphicsItemGroup>
#include<QDebug>
#define OFFSET_X -11
#define OFFSET_Y -25

Element::Element()
{
    qDebug() <<" inside element default constructor";

    _xPos = 0;
    _yPos = 0;
    _element = new QGraphicsTextItem;
    elementSetup();
   _updateElement();

}

int Element:: getX()
{
    return _xPos;
}
int Element:: getY()
{
    return _yPos;
}
int Element ::  getScale()
{
    return _elementScale;
}

void Element :: setPosition(int x,int y)
{
    qDebug() << "inside setPosition";
    _xPos = x;
    _yPos = y;
    _updateElement();

}
void Element :: _updateElement()
{
    qDebug() << "inside updateElement";
    _element -> setX(_xPos * 120 + OFFSET_X);// + 50 );
    _element -> setY(_yPos * 120 + OFFSET_Y);// + 50  );

}
void Element ::  elementSetup()
{

    _element -> setPlainText(_uft8Code);
    _element ->setScale(_elementScale);
    _element -> setPlainText(_uft8Code);
}
void Element :: elementSetup(int element_color)
{
    _elementColor = element_color;
    if(_elementColor == ELEMENT_WHITE)
        _uft8Code = "\u265A";
    else if(_elementColor == ELEMENT_BLACK)
        _uft8Code = "\u2654";
    _element -> setPlainText(_uft8Code);
    _element ->setScale(_elementScale);
    _element -> setPlainText(_uft8Code);

}
void Element:: elementSetup(QString uft8_code,int element_color)
{
    _uft8Code = uft8_code;
    _elementColor = element_color;
    _element -> setPlainText(_uft8Code);
    _element ->setScale(_elementScale);
    _element -> setPlainText(_uft8Code);
}

void Element :: addToScene(QGraphicsScene *scene)
{
    qDebug() <<" inside addToScene";
    scene -> addItem(_element);
}
