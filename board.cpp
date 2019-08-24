#include<QDebug>
#include "board.h"
Board::Board()
{
    _rect = new QGraphicsRectItem*[_rowNum];
    //Allocating memory for 8 x 8 rectangle
    for(int i=0;i<_rowNum;i++)
    {
        _rect[i] = new QGraphicsRectItem[_columnNum];
    }
}

void Board::getBoardScene(QGraphicsScene *scene)
{
    qDebug() << "inside board :: getBoardScene";
    QGraphicsRectItem * temp;
    QPainter painter;
    painter.setPen(Qt::gray);
    QBrush brush(Qt::CrossPattern);
    for(int i=0; i<_rowNum;i++)
    {
        for(int j=0; j< _columnNum;j++)
        {
            temp = *(_rect+i) + j;
            temp -> setRect( i * _gridSize, j * _gridSize, _gridSize, _gridSize);

            if((i + j) % 2)
                temp -> setBrush(QColor(125,143,191,255));
            else
                temp -> setBrush(QColor(243,245,244,255));

            scene->addItem(temp);
        }
    }

}

void Board :: viewBoard(QGraphicsView *view)
{
    qDebug() << "inside board :: viewBoard";
    QGraphicsRectItem * temp;
    QPainter painter;
    painter.setPen(Qt::gray);
    QBrush brush(Qt::CrossPattern);
    for(int i=0; i<_rowNum;i++)
    {
        for(int j=0; j< _columnNum;j++)
        {
            temp = *(_rect+i) + j;
            temp -> setRect( i * _gridSize, j * _gridSize, _gridSize, _gridSize);

            if((i + j) % 2)
                temp -> setBrush(QColor(125,143,191,255));
            else
                temp -> setBrush(QColor(243,245,244,255));

            _scene->addItem(temp);
        }
    }
    view -> setScene(_scene);

}
void Board :: viewText(QGraphicsView *view)
{
    qDebug() <<"Scene Address inside declaration" << _scene;
    //_king = new King(0,0,1);//(0,5,0,_scene);
    for(int i = 0; i < 8; i++)
    {
        _king[i].elementSetup(ELEMENT_WHITE);
        _king[i].setPosition(i,0);
        _king[i].addToScene(_scene);
    }
    view -> setScene(_scene);
}


