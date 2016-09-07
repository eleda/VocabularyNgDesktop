#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>

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

    void on_actionPreferences_triggered();

    void on_actionSearch_triggered();

    void on_actionChooseVocab_triggered();

    void on_actionExit_triggered();

    void on_actionMinimize_triggered();

    void on_actionRename_triggered();

    void on_actionClear_triggered();

    void on_actionClearAll_triggered();

    void on_actionSave_triggered();

    void on_actionRefresh_triggered();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_actionNewWord_triggered();

    void on_actionAboutQt_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
