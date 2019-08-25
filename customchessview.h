#ifndef CUSTOMCHESSVIEW_H
#define CUSTOMCHESSVIEW_H
//#include<QGraphicsView>
#include<QGraphicsScene>
#include<QWidget>
#include<QtWidgets>
#include<QDebug>
#include<QMouseEvent>
class customChessView :  public QGraphicsView
{

private:
    bool _mouseButtonPressedFlag =0;

public:
    customChessView(QWidget *parent =0);
    QPoint getCursorPosition();
protected:
    QPoint * _viewCursorPosition = new QPoint();
    virtual void mouseMoveEvent(QMouseEvent *event) override;
  //   virtual void wheelEvent(QWheelEvent *event);
    virtual void mousePressEvent(QMouseEvent *event) override;
};

#endif // CUSTOMCHESSVIEW_H

