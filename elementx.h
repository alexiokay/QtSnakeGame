#ifndef ELEMENTX_H
#define ELEMENTX_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QTime>


class ElementX : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    ElementX();
public slots:
    void MoveDown();
};

#endif // ELEMENTX_H
