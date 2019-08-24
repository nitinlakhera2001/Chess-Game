#ifndef TEAM_H
#define TEAM_H

#include<QGraphicsScene>
#include<QGraphicsView>

#include "king.h"




/* The team contains 8 * 2 members
 * It will contains following validation that should be followed during chess
 *  1. team member can not kill their own member
 *  2. two member can not have same location.
 *  3. team  check team valid movement: every team member can not cross its member path except horse
 *  4. team has either black or white color
 *
 *
 *
 *
*/

class team
{
private:
    int _teamColor;
    QGraphicsScene * _teamScene = new QGraphicsScene();
    King * _teamKing;





public:


    team(int team_color);
    void viewTeam(QGraphicsView *view);
    void getTeamScene(QGraphicsScene *scene);
};

#endif // TEAM_H
