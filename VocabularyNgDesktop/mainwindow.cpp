#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "newworddialog.h"
#include "settingsdialog.h"
#include "searchdialog.h"
#include "choosevocabdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->listWidget->addItem("Word=Szó");
    ui->listWidget->addItem("Első=Második");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQt_n_vjegye_triggered()
{
    QMessageBox::aboutQt(this, "Hümm");
}

void MainWindow::on_actionN_vjegy_triggered()
{
    QMessageBox::about(this, "Vocabulary", "<p><strong>Vocabulary version 0.1</strong></p><p>2016 Elekes Dávid</p>");
}

void MainWindow::on_actionNew_Word_triggered()
{
    NewWordDialog newWordDlg;
    if (newWordDlg.exec() == QDialog::Accepted)
    {
        ui->listWidget->addItem(newWordDlg.getWord() + "=" + newWordDlg.getMeaning());
    }

}

void MainWindow::on_actionPreferences_triggered()
{
    SettingsDialog settingsDialog;
    settingsDialog.exec();
}

void MainWindow::on_actionSearch_triggered()
{
    SearchDialog searchDlg;
    searchDlg.show();
}

void MainWindow::on_actionChooseVocab_triggered()
{
    ChooseVocabDialog chooseVocabDlg;
    chooseVocabDlg.exec();
}

void MainWindow::on_actionExit_triggered()
{
    int button = QMessageBox::question(this, "Kérdés", "Valóban kilép a programból?",
                                       QMessageBox::Yes, QMessageBox::No);
    if (button == QMessageBox::Yes)
    {
            QApplication::quit();
    }
}

void MainWindow::on_actionMinimize_triggered()
{
    QWidget::setWindowState(Qt::WindowMinimized);
}
