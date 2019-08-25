#include "customchessview.h"
customChessView::customChessView(QWidget *parent): QGraphicsView(parent)
{
    this->showMaximized();
}

QPoint customChessView::getCursorPosition()
{
    return *_viewCursorPosition;

}

void customChessView::mousePressEvent(QMouseEvent *event)
{  
    QGraphicsView :: mousePressEvent(event);
    _mouseButtonPressedFlag = true;///1event->MouseButtonPress;
    qDebug() << "inside mouseClick" << event->pos();


}

void customChessView::mouseMoveEvent(QMouseEvent *event)
{
    QGraphicsView :: mouseMoveEvent(event);
    _viewCursorPosition->setX( event->pos().x());
    _viewCursorPosition->setY( event->pos().y());

    qDebug() << "inside mouseMove   " <<" mousePressed: " << _mouseButtonPressedFlag;
    _mouseButtonPressedFlag = false;//event->MouseButtonPress;


}
