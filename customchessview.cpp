#include "customchessview.h"
customChessView::customChessView(QWidget *parent): QGraphicsView(parent)
{
    this->showMaximized();
}

QPoint customChessView::getCursorPosition()
{
    return *_viewCursorPosition;

}

bool customChessView::isMouseButtonPressed()
{
    return _mouseButtonPressedFlag;
}

void customChessView::returnMousePressedAck(bool ack)
{
 _mouseButtonPressedFlag = !ack;
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


}
