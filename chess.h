#ifndef CHESS_H
#define CHESS_H

#include<QGraphicsScene>
#include<QGraphicsView>
#include<QMouseEvent>
#include<QWidget>
#include<QtWidgets>
#define ELEMENT_BLACK 0
#define ELEMENT_WHITE 1
#include<QDebug>
#include<QtWidgets>
#include<QWidget>
#include "board.h"
#include "team.h"
#include "element.h"
#include "customchessview.h"
/*_currentX and _currentY comes from view
 *
 *
 *
 *
 * */

class chess
{
private:
    int _currentX;
    int _currentY;
    QGraphicsScene * _chessScene = new QGraphicsScene();
    customChessView *_chessView = new customChessView();




    Board * _chessBoard = new Board();
    team  * _chessBlackTeam = new team(ELEMENT_BLACK);
    team  * _chessWhiteTeam = new team(ELEMENT_WHITE);
    Element *e = new Element();

public:
    chess();
    void viewChess(); // view board, two teams and start page
    void getCurrentGrid();
protected:


};


#endif // CHESS_H
