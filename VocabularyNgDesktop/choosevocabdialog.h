#ifndef CHOOSEVOCABDIALOG_H
#define CHOOSEVOCABDIALOG_H

#include <QDialog>

namespace Ui {
class ChooseVocabDialog;
}

class ChooseVocabDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseVocabDialog(QWidget *parent = 0);
    ~ChooseVocabDialog();

private:
    Ui::ChooseVocabDialog *ui;
};

#endif // CHOOSEVOCABDIALOG_H
