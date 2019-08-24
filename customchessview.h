#ifndef CUSTOMCHESSVIEW_H
#define CUSTOMCHESSVIEW_H
//#include<QGraphicsView>
#include<QGraphicsScene>
#include<QWidget>
#include<QtWidgets>
#include<QDebug>
#include<QMouseEvent>
class customChessView : public QGraphicsView
{
public:
    customChessView(QWidget *parent =0);
protected:
    virtual void mouseMoveEvent(QMouseEvent *event) override;
  //   virtual void wheelEvent(QWheelEvent *event);
    virtual void mousePressEvent(QMouseEvent *event) override;
};

#endif // CUSTOMCHESSVIEW_H

