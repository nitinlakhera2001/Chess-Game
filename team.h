#ifndef TEAM_H
#define TEAM_H

#include<QGraphicsScene>
#include<QGraphicsView>
#include<QDebug>
#include "king.h"
#include "queen.h"
#include "knight.h"
#include"rook.h"
#include "bishop.h"
#include "pawn.h"




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
    Queen * _teamQueen;
    Rook * _teamRook[2];
    Bishop * _teamBishop[2];
    Knight * _teamKnight[2];
    Pawn * _teamPawn[8];






public:


    team(int team_color);
    void getTeamScene(QGraphicsScene *scene);
    bool checkMemberInGrid(QPoint grid_point);
};

#endif // TEAM_H
