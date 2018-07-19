#ifndef Snake_H
#define Snake_H

#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QTimer>
#include <QTime>
#include <QObject>
#include <QPen>
#include <QList>
#include "eat.h"
#include <QScopedPointer>
#include <QVector>
#include <QPointF>
#include "game.h"
#include "elementx.h"
#include <QVector>

class Snake : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    Snake();
    Snake(int &whichis);
    virtual void keyPressEvent(QKeyEvent * event);
     QVector<Snake*> g;

public slots:
    virtual void snakeBody();
    virtual void move();
    virtual void move_body();
    virtual void spawn();
    virtual void handleCollisions();

private:
    int who=1;
    QPointF head;
    int speed;
    QList<QPointF> tail;
    bool isPause;

};
#endif // Snake_H
