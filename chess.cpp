#include "chess.h"

chess::chess()
{

}


void chess::viewChess()
{
    _chessBoard->getBoardScene(_chessScene);
    _chessBlackTeam->getTeamScene(_chessScene);
    _chessWhiteTeam->getTeamScene(_chessScene);
    _chessView->setScene(_chessScene);
   // _chessView->updateScene()
    _chessView ->showMaximized();

}



void chess::getCurrentGrid()
{


}

