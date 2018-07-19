#include "eat.h"
#include <memory>

Eat::Eat()
{
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());
    setPixmap(QPixmap(":/Images/eat"));
    setPos(0+20*(qrand()%20),0+20*(qrand()%20));
}
