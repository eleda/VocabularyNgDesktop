#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionQt_n_vjegye_triggered();

    void on_actionN_vjegy_triggered();

    void on_actionNew_Word_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
