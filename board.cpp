#include<QDebug>
#include "board.h"
void Board::highlightRect(QGraphicsRectItem *rect)
{
    QBrush brush(Qt::CrossPattern);
    rect->setBrush(QColor(0,0,191,255));
}

Board::Board()
{
    _rect = new QGraphicsRectItem*[_rowNum];
    //Allocating memory for 8 x 8 rectangle
    for(int i=0;i<_rowNum;i++)
    {
        _rect[i] = new QGraphicsRectItem[_columnNum];
    }
}

void Board::updateBoard(QPoint *cursor_position)
{
    QGraphicsRectItem * temp;
    int current_x = cursor_position->x();
    int current_y = cursor_position->y();
    qDebug() << "I AM WHERE I AM";
    qDebug() << "x:" << current_x;
    qDebug() << "y:" << current_y;
    temp = *(_rect+4) + 4;
    qDebug() << "tempX: " << temp->pos().x();
    qDebug() << "tempY: " << temp->y();

    for(int i=0; i<_rowNum;i++)
    {
        for(int j=0; j< _columnNum;j++)
        {
            temp = *(_rect+i) + j;
            if((i + j) % 2)
                temp -> setBrush(QColor(125,143,191,255));
            else
                temp -> setBrush(QColor(243,245,244,255));

             if(current_x > temp -> x() && current_x < (temp -> x() + _gridSize) && current_y >temp -> y() && current_y < temp -> y() + _gridSize)
             {
                 temp -> setBrush(QColor(184,194,218,255));
                 qDebug() << "CONDITION SATISFIED";
             }
          }
      }
}

void Board::getBoardScene(QGraphicsScene *scene)
{
    qDebug() << "inside board :: getBoardScene";
    QGraphicsRectItem * temp;
    QBrush brush(Qt::CrossPattern);
    for(int i=0; i<_rowNum;i++)
    {
        for(int j=0; j< _columnNum;j++)
        {
            temp = &_rect[i][j];//*(_rect+i) + j;
            temp -> setRect(0,0, _gridSize, _gridSize);
            temp->setPos( i * _gridSize, j * _gridSize);

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


