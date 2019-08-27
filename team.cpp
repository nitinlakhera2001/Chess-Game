#include "team.h"


team::team(int team_color)
{
    _teamColor = team_color;
    _teamKing  = new King(_teamColor);
    _teamQueen = new Queen(_teamColor);
    for(int i=0;i<2;i++)
    {
        _teamRook[i]   = new Rook(_teamColor);
        _teamBishop[i] = new Bishop(_teamColor);
        _teamKnight[i] = new Knight(_teamColor);
    }

    for(int i = 0; i < 8; i++)
        _teamPawn[i] = new Pawn(_teamColor);
}

void team::getTeamScene(QGraphicsScene *scene)
{
    _teamKing->getKingScene(scene);
    _teamQueen->getQueenScene(scene);
    for(int i=0;i<2;i++)
    {
        _teamRook[i] -> getRookScene(scene);
        _teamKnight[i] -> getKnightScene(scene);
        _teamBishop[i] -> getBishopScene(scene);
    }
    for(int i=0;i<8;i++)
        _teamPawn[i] -> getPawnScene(scene);

}

bool team::checkMemberInGrid(QPoint grid_point)
{
    int grid_x = grid_point.x();
    int grid_y = grid_point.y();
    int king_x = _teamKing->getX();
    int king_y = _teamKing->getY();
qDebug() << "inside  grid check";
qDebug() << "grid value(" << grid_x << "," << grid_y << ")";
qDebug() << "king value(" << king_x << "," << king_y << ")";


    if(grid_x == _teamKing->getX() && grid_y == _teamKing->getY())
    {
        qDebug() << "inside King grid check";
        return true;
    }
    if(grid_x == _teamQueen->getX() && grid_y == _teamQueen->getY())
    {
        qDebug() << "inside Queen grid check";
        return true;
    }
return false;
}
