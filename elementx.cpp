#include "elementx.h"
#include <memory>
#include <QTime>
#include <QTimer>
#include <QThread>
#include <QDebug>
#include "gamegui.h"

ElementX::ElementX()
{
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());
    setPixmap(QPixmap(":/Images/Bomb"));
    setPos(0+20*(qrand()%20),0+20*(qrand()%20));

    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(MoveDown()));
    timer->start(10);
    setFlag(QGraphicsItem::ItemIsFocusable);


}

void ElementX::MoveDown()
{
    setPos(x(),y()+1);
    if(this->pos().y()>400) {
        ElementX *element = new ElementX();
        scene()->addItem(element);
        scene()->removeItem(this);
        delete this;
        qDebug()<<"bye";

    }
}

