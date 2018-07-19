#include "Snake.h"
#include <QDebug>
#include <QMessageBox>
#include <QThread>

QTimer *timer = new QTimer();
int snakeHistoryX[10000];
int snakeHistoryY[10000];
int growing=1;
int howMuch=0;
char course='r';

Snake::Snake(int &whichis)  {
        QTimer *timer2 = new QTimer();
        connect(timer2,SIGNAL(timeout()),this,SLOT(move_body()));
        timer2->start(300);
        setPos(snakeHistoryX[howMuch-this->who],snakeHistoryY[howMuch-this->who]);
        setPixmap(QPixmap(":/Images/snakeBody"));
        qDebug()<<"x: "<<snakeHistoryX[howMuch-this->who]<<"y: "<<snakeHistoryY[howMuch-this->who]<<"how.m: "<<howMuch;
        setFlag(QGraphicsItem::ItemIsFocusable);
        setFocus();
        who=whichis;
        qDebug()<<this->who;

    }

Snake::Snake() :
                head(0, 0)
{
        growing=1;
        howMuch=0;
        QTimer *timer1 = new QTimer();
        connect(timer1,SIGNAL(timeout()),this,SLOT(move()));
        timer1->start(300);
        setPixmap(QPixmap(":/Images/snakeHead"));
        setFlag(QGraphicsItem::ItemIsFocusable);
     }






void Snake::keyPressEvent(QKeyEvent *event){
    if(event->key()==Qt::Key_Left && course!='r'){
        course='l';
    }
    else if(event->key()==Qt::Key_Right && course!='l'){
        course='r';
    }
    else if(event->key()==Qt::Key_Up && course!='d'){
        course='u';
    }
    else if(event->key()==Qt::Key_Down && course!='u'){
        course='d';
    }
}

void Snake::snakeBody()
{
    for(int i=0; i<=200; i++)
    {
        //QList<QScopedPointer<Snake>> mLabels;
        //mLabels.append(QScopedPointer<Snake>(new Snake("body"));
        //scene()->addItem(mLabels.);
        //setRect(pos().x(),pos().y(),10,10);
    }
}

void Snake::move()
{
        g.resize(200);
        if(howMuch==0) {
            g.append(new Snake(growing));
            scene()->addItem(g[200]);
        }

        switch(course) {
        case 'r':
            setPos(x()+20,y());
            this->setPixmap(QPixmap(":/Images/snakeHeadRight"));
            break;
        case 'l':
            setPos(x()-20,y());
            this->setPixmap(QPixmap(":/Images/snakeHeadLeft"));
            break;
        case 'u':
            setPos(x(),y()-20);
            this->setPixmap(QPixmap(":/Images/snakeHeadUp"));
            break;
        case 'd':
            setPos(x(),y()+20);
            this->setPixmap(QPixmap(":/Images/snakeHeadDown"));
            break;
    }

    if(pos().x() < 0)
        setPos(x()+400,y());
    else if(pos().x() > 390)
        setPos(x()-400,y());
    else if(pos().y() < 0)
        setPos(x(),y()+400);
    else if(pos().y() > 390)
        setPos(x(),y()-400);

    Snake::handleCollisions();
    snakeHistoryX[howMuch]=this->pos().x();
    snakeHistoryY[howMuch]=this->pos().y();

    qDebug()<<this->pos().x() << this->pos().y();
    howMuch++;
}

void Snake::move_body()
{
    setPos(snakeHistoryX[howMuch-this->who],snakeHistoryY[howMuch-this->who]);

}

void Snake::spawn()
{
    QScopedPointer<Eat> eat(new Eat());
    scene()->addItem(eat.take());
}
void Snake::handleCollisions() {
    QList<QGraphicsItem *> colliding_items = collidingItems();

    for(int i=0, n=colliding_items.size(); i<n; ++i) {
        if(typeid(*colliding_items[i]) == typeid(Eat))
        {
            scene()->removeItem(colliding_items[i]);
            delete colliding_items[i];
            Snake::spawn();
            growing++;
            int c = 200;
            g.append(new Snake(growing));
            scene()->addItem(g[c]);
            c--;
        }
    }

    QList<QGraphicsItem *> colliding_items2 = collidingItems();
    for(int i=0, n=colliding_items2.size(); i<n; ++i) {
        if(typeid(*colliding_items2[i]) == typeid(Snake))
        {
            QMessageBox msgBox;
            msgBox.setText("GAME OVER");
            msgBox.exec();
        }
    }

    QList<QGraphicsItem *> colliding_items3 = collidingItems();
    for(int i=0, n=colliding_items3.size(); i<n; ++i) {
        if(typeid(*colliding_items3[i]) == typeid(ElementX))
        {
            QMessageBox msgBox;
            msgBox.setText("GAME OVER");
            msgBox.exec();
        }
    }
}
