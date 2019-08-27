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

void Board::updateBoard(QPoint grid_point)
{

    highlightGrid(grid_point);
}

void Board::getBoardScene(QGraphicsScene *scene)
{
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
    for(int i=0;i<_rowNum;i++)
    {
        for(int j=0;i<_columnNum;j++)
        {
            qDebug() << "(" << i+1 << "," << j + 1 <<") -> " << *(_rect+i) + j;
        }
    }

}

bool Board::selectGrid(QPoint grid_point)
{
    QGraphicsRectItem * temp;
    int temp_x = grid_point.x();
    int temp_y = grid_point.y();
    static QPoint *prev_grid_point = new QPoint();
    prev_grid_point->setX(temp_x);
    prev_grid_point->setY(temp_y);

    temp = *(_rect+temp_x) + temp_y;
    qDebug() << "inside highlight function";
    qDebug() << "addres in function";// << temp;
    temp-> setBrush(QColor(125,143,0,255));
    return true;

}

void Board::highlightGrid(QPoint grid_point)
{
    QGraphicsRectItem * temp;
    int current_x = grid_point.x();
    int current_y = grid_point.y();
    static QPoint *prev_grid_point = new QPoint();
    int previous_x = prev_grid_point->x();
    int previous_y = prev_grid_point->y();
    temp = *(_rect+current_x) + current_y;
    temp -> setBrush(QColor(184,194,218,255));

    temp = *(_rect + previous_x) + previous_y;
    if((previous_x + previous_y) % 2)
        temp -> setBrush(QColor(125,143,191,255));
    else
        temp -> setBrush(QColor(243,245,244,255));


    prev_grid_point->setX(current_x);
    prev_grid_point->setY(current_y);


    qDebug() << "inside highlight function";
    qDebug() << "addres in function";// << temp;
}

int Board::getGridSize()
{
    return _gridSize;

}



