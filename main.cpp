#include <QApplication>
#include<QGraphicsScene>
#include<QGraphicsRectItem>
#include<QGraphicsView>
#include <QDebug>

#include "board.h"
//#include "testingdummy.h"
#include "chess.h"
/*
 * basic knowledge of pointer and memory management
 * very basic knowledge of Qt(widget)
 * tutoria; topics:
 * - QGraphicsScene
 * -QGraphicsItem(QRaphicsRectitem)
 * - QGraphicsView
 *
 * */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qDebug() << "First Line. Inside main";
    chess * chessGame = new chess();

    chessGame -> viewChess();


    return a.exec();
}
