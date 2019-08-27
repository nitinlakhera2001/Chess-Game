#include "chess.h"

QPoint chess::gridPosition()
{
    QPoint temp;
    int reminder_x = _cursorPosition->x() % _chessBoard->getGridSize();
    int reminder_y = _cursorPosition->y() % _chessBoard->getGridSize();
    int x = (_cursorPosition->x() - reminder_x) / _chessBoard->getGridSize();
    int y = (_cursorPosition->y() - reminder_y) / _chessBoard->getGridSize();

    temp.setX(x);
    temp.setY(y);
    return  temp;

}

chess::chess( )// :QObject
{
 timer = new QTimer();
 connect(timer,SIGNAL(timeout()),this,SLOT(updateChess()));
    timer->start(800);
}


void chess::viewChess()
{
    _chessBoard->getBoardScene(_chessScene);
    _chessBlackTeam->getTeamScene(_chessScene);
    _chessWhiteTeam->getTeamScene(_chessScene);
    _chessView->setScene(_chessScene);
    _chessView->setFixedSize(1000,1000);
}



void chess::getCurrentGrid()
{


}



void chess::updateChess()
{
    _cursorPosition->setX(_chessView->getCursorPosition().x());
    _cursorPosition->setY(_chessView->getCursorPosition().y());
qDebug() << "gridPos" << gridPosition();
    _chessBoard->updateBoard(gridPosition());

    if(_chessView->isMouseButtonPressed() == true)
    {
        if(_chessBlackTeam->checkMemberInGrid(gridPosition()) == true)
        {
            qDebug() << "inside check member if satisfied";
            qDebug() << "getting return " << _chessBoard -> selectGrid(gridPosition());
        }


//        _chessView->returnMousePressedAck(true);
    }
    printChessAll();

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

