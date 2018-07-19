#include <QApplication>
#include <QGraphicsScene>
#include "Snake.h"
#include "eat.h"
#include <QGraphicsView>
#include <QThread>
#include <QRandomGenerator>
#include <QTime>
#include <QScopedPointer>
#include "game.h"
#include "mainwindow.h"

#include <QDebug>

int main(int argc, char *argv[])
{           
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

   return a.exec();
}
