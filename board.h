#ifndef BOARD_H
#define BOARD_H
#include<QGraphicsScene>
#include<QGraphicsRectItem>
#include<QGraphicsView>
#include<QDebug>
#include "king.h"
#include "element.h"

/*The board class contain chess board design. it contains 8 x 8  squares of alternate color.
 * The Board will be called in chess class that contains a board, two teams. Individual team will contains members wit their common and specific properties
 * The common properties will be defined and inherited via element class.
 *
*/

class Board
{
private:
    int _rowNum = 8;
    int _columnNum =  8;
    int _gridSize = 120;
    int _rectNum = _rowNum * _columnNum;

    QGraphicsScene * _scene = new QGraphicsScene();
    QGraphicsView * _boardView = new QGraphicsView();
    QGraphicsRectItem **_rect;
   // QGraphicsTextItem * King = new QGraphicsTextItem();
    //King *_king;
    void highlightRect(QGraphicsRectItem *rect);
    King _king[8];
public:
    Board();
    void updateBoard(QPoint *cursor_position);
    void getBoardScene(QGraphicsScene *scene);
    void viewBoard(QGraphicsView *view);
    void viewText(QGraphicsView *view);

};

#endif // BOARD_H
