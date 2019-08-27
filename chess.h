#ifndef CHESS_H
#define CHESS_H

#include<QGraphicsScene>
#include<QGraphicsView>
#include<QMouseEvent>
#include<QWidget>
#include<QtWidgets>
#include<QTimer>
#define ELEMENT_BLACK 0
#define ELEMENT_WHITE 1
#include<QDebug>
#include<QtWidgets>
#include<QWidget>
#include<QObject>
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

class chess : public QObject
{
   Q_OBJECT

private:
    QPoint  * _cursorPosition = new QPoint();
    QTimer * timer;// = new QTimer();
    //QWidget * _chessWidget = new QWidget;
    QGraphicsScene * _chessScene = new QGraphicsScene();
    customChessView *_chessView = new customChessView();




    Board * _chessBoard = new Board();
    team  * _chessBlackTeam = new team(ELEMENT_BLACK);
    team  * _chessWhiteTeam = new team(ELEMENT_WHITE);
    Element *e = new Element();
private:
    QPoint gridPosition(); // Adapter to convert cursorPosition to grid value of rect

public:
    chess();
    void viewChess(); // view board, two teams and start page
    void getCurrentGrid();
    void printChessAll();


public slots:
    void updateChess();
protected:
   QPoint operator =(QPoint *point);

};


#endif // CHESS_H
