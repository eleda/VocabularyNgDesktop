#ifndef NEWWORDDIALOG_H
#define NEWWORDDIALOG_H

#include <QDialog>

namespace Ui {
class NewWordDialog;
}

class NewWordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewWordDialog(QWidget *parent = 0);
    ~NewWordDialog();
    void setWord(QString word);
    void setMeaning(QString meaning);
    QString getWord();
    QString getMeaning();

private slots:
    void on_buttonBox_accepted();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

private:
    Ui::NewWordDialog *ui;
    QString word;
    QString meaning;
};

#endif // NEWWORDDIALOG_H
