 #include "customchessview.h"
customChessView::customChessView(QWidget *parent): QGraphicsView(parent)
{

}

void customChessView::mousePressEvent(QMouseEvent *event)
{  
   QGraphicsView :: mousePressEvent(event);

    qDebug() << "inside mouseClick" << event->pos();


}

void customChessView::mouseMoveEvent(QMouseEvent *event)
{
   QGraphicsView :: mouseMoveEvent(event);


    qDebug() << "inside mouseMove   " << event->pos();

}
