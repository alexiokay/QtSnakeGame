/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *redSnake_button;
    QRadioButton *greenSnake_button;
    QRadioButton *blueSnake_button;
    QLabel *snakeChosing;
    QPushButton *start_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(296, 283);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 90, 160, 88));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        redSnake_button = new QRadioButton(verticalLayoutWidget);
        redSnake_button->setObjectName(QStringLiteral("redSnake_button"));

        verticalLayout->addWidget(redSnake_button);

        greenSnake_button = new QRadioButton(verticalLayoutWidget);
        greenSnake_button->setObjectName(QStringLiteral("greenSnake_button"));

        verticalLayout->addWidget(greenSnake_button);

        blueSnake_button = new QRadioButton(verticalLayoutWidget);
        blueSnake_button->setObjectName(QStringLiteral("blueSnake_button"));

        verticalLayout->addWidget(blueSnake_button);

        snakeChosing = new QLabel(centralwidget);
        snakeChosing->setObjectName(QStringLiteral("snakeChosing"));
        snakeChosing->setGeometry(QRect(50, 50, 81, 20));
        start_button = new QPushButton(centralwidget);
        start_button->setObjectName(QStringLiteral("start_button"));
        start_button->setGeometry(QRect(50, 190, 75, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 296, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        redSnake_button->setText(QApplication::translate("MainWindow", "RedSnake", nullptr));
        greenSnake_button->setText(QApplication::translate("MainWindow", "GreenSnake", nullptr));
        blueSnake_button->setText(QApplication::translate("MainWindow", "BlueSnake", nullptr));
        snakeChosing->setText(QApplication::translate("MainWindow", "Wybierz weza", nullptr));
        start_button->setText(QApplication::translate("MainWindow", "START", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
