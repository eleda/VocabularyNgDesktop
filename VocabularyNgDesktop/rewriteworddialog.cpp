#include "rewriteworddialog.h"
#include "ui_rewriteworddialog.h"

RewriteWordDialog::RewriteWordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RewriteWordDialog)
{
    ui->setupUi(this);
}

RewriteWordDialog::~RewriteWordDialog()
{
    delete ui;
}

QString RewriteWordDialog::getLineEditText()
{
    return ui->lineEdit->text();
}

void RewriteWordDialog::setLineEditText(QString text)
{
    ui->lineEdit->setText(text);
}
