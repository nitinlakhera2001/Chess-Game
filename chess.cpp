#include "chess.h"

chess::chess( )// :QObject
{
 timer = new QTimer();
 connect(timer,SIGNAL(timeout()),this,SLOT(updateChess()));
    timer->start(500);
}


void chess::viewChess()
{
    _chessBoard->getBoardScene(_chessScene);
    _chessBlackTeam->getTeamScene(_chessScene);
    _chessWhiteTeam->getTeamScene(_chessScene);
    _chessView->setScene(_chessScene);
   // _chessView ->showMaximized();
    _chessView->setFixedSize(1000,1000);
    //_chessWidget->showMaximized();
}



void chess::getCurrentGrid()
{


}



void chess::updateChess()
{
    _cursorPosition->setX(_chessView->getCursorPosition().x());
    _cursorPosition->setY(_chessView->getCursorPosition().y());
    _chessBoard->updateBoard(_cursorPosition);
    printChessAll();
    qDebug() <<" inside update chess"<< _cursorPosition;
    //_chessBoard->changeItemColor();
    // _chessBoard->update();
}

void chess::printChessAll()
{
    qDebug() << "inside chessPrintAll" << "chess_cursor point" << _cursorPosition->x();
}



QPoint chess::operator =(QPoint *point)
{
    QPoint p;
    p.setX( point->x());
    p.setY(point ->y());

    return p;

}

