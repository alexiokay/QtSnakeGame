#ifndef GAMEGUI_H
#define GAMEGUI_H

#include <QWidget>
#include <QObject>
#include <QGraphicsScene>
#include "Snake.h"
#include "eat.h"
#include <QGraphicsView>
#include <QThread>
#include <QRandomGenerator>
#include <QTime>
#include <QScopedPointer>
#include <QCloseEvent>

namespace Ui {
class GameGUI;
}

class GameGUI : public QWidget
{
    Q_OBJECT

public:
    explicit GameGUI(QWidget *parent = 0);
    ~GameGUI();
    void closeEvent(QCloseEvent *event);

private:
    Ui::GameGUI *ui;

    Snake *snake = new Snake();
    QGraphicsScene *scene = new QGraphicsScene();
};



#endif // GAMEGUI_H
