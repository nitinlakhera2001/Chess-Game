#include "team.h"


team::team(int team_color)
{
 _teamColor = team_color;
 _teamKing = new King(_teamColor);
}

void team::viewTeam(QGraphicsView *view)
{
    _teamKing -> viewKing(view);
}

void team::getTeamScene(QGraphicsScene *scene)
{
_teamKing ->getKingScene(scene);

}
