#include "newworddialog.h"
#include "ui_newworddialog.h"

NewWordDialog::NewWordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewWordDialog)
{
    ui->setupUi(this);
    ui->label->setFocus();
}

NewWordDialog::~NewWordDialog()
{
    delete ui;
}

void NewWordDialog::setWord(QString _word)
{
    word = _word;
}

void NewWordDialog::setMeaning(QString _meaning)
{
    meaning = _meaning;
}

QString NewWordDialog::getWord()
{
    return word;
}

QString NewWordDialog::getMeaning()
{
    return meaning;
}

void NewWordDialog::on_buttonBox_accepted()
{
}

void NewWordDialog::on_lineEdit_textChanged(const QString &arg1)
{
    word = ui->lineEdit->text();
}

void NewWordDialog::on_lineEdit_2_textChanged(const QString &arg1)
{
    meaning = ui->lineEdit->text();
}
