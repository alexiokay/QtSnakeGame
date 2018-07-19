#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "Gamegui.h"
int type;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_QuitOnClose);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent (QCloseEvent *event) {
    event->accept();
}

void MainWindow::on_start_button_clicked()
{
    GameGUI *gui = new GameGUI();
    gui->setAttribute(Qt::WA_DeleteOnClose, Qt::WA_QuitOnClose);
    gui->show();

}

void MainWindow::on_redSnake_button_released()
{
    type=1;
}

void MainWindow::on_greenSnake_button_released()
{
    type=2;
}

void MainWindow::on_blueSnake_button_released()
{
    type=3;
}
