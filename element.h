#ifndef ELEMENT_H
#define ELEMENT_H
#include<QString>
#include<QGraphicsTextItem>
#include<QGraphicsScene>
#define ELEMENT_BLACK 0
#define ELEMENT_WHITE 1


class Element
{
public:
    Element();
    Element(const Element& other);
    int getX();
    int getY();
    void printAll();
    void setPosition(int x,int y);
    int getScale();
    void elementSetup(QString uft8_code,int element_color);
    void elementSetup(int element_color);
    void elementSetup();
    void addToScene(QGraphicsScene *scene);




protected:
    int _xPos, _yPos;
    int _elementColor;

    QString _uft8Code = "\u2663";
    QGraphicsTextItem * _element;

private:
int _elementScale = 7;

private:
void _updateElement();


};

#endif // ELEMENT_H
