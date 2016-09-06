#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QMainWindow>

namespace Ui {
class SearchDialog;
}

class SearchDialog : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = 0);
    ~SearchDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SearchDialog *ui;
};

#endif // SEARCHDIALOG_H
