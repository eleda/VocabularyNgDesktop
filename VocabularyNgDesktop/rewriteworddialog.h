#ifndef REWRITEWORDDIALOG_H
#define REWRITEWORDDIALOG_H

#include <QDialog>

namespace Ui {
class RewriteWordDialog;
}

class RewriteWordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RewriteWordDialog(QWidget *parent = 0);
    ~RewriteWordDialog();
    QString getLineEditText();
    void setLineEditText(QString text);

private:
    Ui::RewriteWordDialog *ui;
};

#endif // REWRITEWORDDIALOG_H
