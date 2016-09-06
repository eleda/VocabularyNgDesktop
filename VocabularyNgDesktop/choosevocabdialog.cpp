#include "choosevocabdialog.h"
#include "ui_choosevocabdialog.h"

ChooseVocabDialog::ChooseVocabDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseVocabDialog)
{
    ui->setupUi(this);
}

ChooseVocabDialog::~ChooseVocabDialog()
{
    delete ui;
}
