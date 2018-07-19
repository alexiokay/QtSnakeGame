/********************************************************************************
** Form generated from reading UI file 'gamegui.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEGUI_H
#define UI_GAMEGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameGUI
{
public:
    QGraphicsView *graphicsView;
    QLabel *label;

    void setupUi(QWidget *GameGUI)
    {
        if (GameGUI->objectName().isEmpty())
            GameGUI->setObjectName(QStringLiteral("GameGUI"));
        GameGUI->resize(671, 486);
        graphicsView = new QGraphicsView(GameGUI);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(150, 30, 411, 411));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label = new QLabel(GameGUI);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 111, 31));

        retranslateUi(GameGUI);

        QMetaObject::connectSlotsByName(GameGUI);
    } // setupUi

    void retranslateUi(QWidget *GameGUI)
    {
        GameGUI->setWindowTitle(QApplication::translate("GameGUI", "Form", nullptr));
        label->setText(QApplication::translate("GameGUI", "Punkty: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameGUI: public Ui_GameGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEGUI_H
