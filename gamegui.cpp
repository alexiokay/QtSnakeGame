#include "gamegui.h"
#include "ui_gamegui.h"

//Create an item to put into the scene
#include <QApplication>
#include <QGraphicsScene>
#include "Snake.h"
#include "redsnake.h"
#include "greensnake.h"
#include "eat.h"
#include <QGraphicsView>
#include <QThread>
#include <QRandomGenerator>
#include <QTime>
#include <QScopedPointer>
#include "elementx.h"
#include <QDebug>
#include <QMessageBox>

GameGUI::GameGUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameGUI)
{
    ui->setupUi(this);
    scene =new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    setAttribute(Qt::WA_QuitOnClose);

    scene->addItem(snake);
    snake->spawn();

    ElementX *element = new ElementX();
    scene->addItem(element);
    qDebug()<<element->pos().y();

    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    ui->graphicsView->setFixedSize(402,402);
    ui->graphicsView->setWindowTitle("Snake");
    scene->setSceneRect(-0,-0,410,410);

}

void GameGUI::closeEvent (QCloseEvent *event) {
    qDebug()<<"ggggg";
    scene->removeItem(snake);
    delete snake;
    event->accept();
}


GameGUI::~GameGUI()
{
    delete ui;
}
