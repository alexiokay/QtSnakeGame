#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gamegui.h"
#include <QCloseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void closeEvent (QCloseEvent *event);

private slots:
    void on_start_button_clicked();

    void on_redSnake_button_released();

    void on_greenSnake_button_released();

    void on_blueSnake_button_released();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
