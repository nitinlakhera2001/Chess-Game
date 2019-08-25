#include "team.h"


team::team(int team_color)
{
    _teamColor = team_color;
    _teamKing = new King(_teamColor);
    _teamQueen = new Queen(_teamColor);
    for(int i=0;i<2;i++)
    {
        _teamRook[i]  = new Rook(_teamColor);
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
