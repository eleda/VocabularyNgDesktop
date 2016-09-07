#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "newworddialog.h"
#include "settingsdialog.h"
#include "searchdialog.h"
#include "choosevocabdialog.h"
#include "rewriteworddialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    on_actionRefresh_triggered();
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
    searchDlg.exec();
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

void MainWindow::on_actionRename_triggered()
{
    if (ui->listWidget->selectedItems().size() == 0) {
        QMessageBox::warning(this, "Kijelölési hiba", "Nem jelölt ki elemet.");
        return;
    }

    RewriteWordDialog rewriteWordDlg;
    rewriteWordDlg.setLineEditText(ui->listWidget->selectedItems().at(0)->text());
    if (rewriteWordDlg.exec() == QDialog::Accepted) {
        ui->listWidget->selectedItems().at(0)->setText(rewriteWordDlg.getLineEditText());
    }
}

void MainWindow::on_actionClear_triggered()
{
    if (ui->listWidget->selectedItems().size() == 0) {
        QMessageBox::warning(this, "Kijelölési hiba", "Nem jelölt ki elemet.");
    }
    else {
        int areYouSure = QMessageBox::question(this, "Kérdés", "Tényleg törli az elemet?");
        if (areYouSure == QMessageBox::Yes) {
            delete ui->listWidget->selectedItems().at(0);
        }
    }
}

void MainWindow::on_actionClearAll_triggered()
{
    int areYouSure = QMessageBox::question(this, "Törlés", "Valóban törli az összes elemet?");
    if (areYouSure == QMessageBox::Yes) {
        ui->listWidget->clear();
    }
}

void MainWindow::on_actionSave_triggered()
{
    // save vocabulary
    QString currentFileName = "E:/default.voc";
    QFile file(currentFileName);
    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::information(this, "Hiba", "Fájl mentési hiba.");
        return;
    }


    QTextStream out(&file);
    qDebug() << "mu";
    QString cLine;
    for (int i = 0; i < ui->listWidget->count(); i++) {
        cLine = ui->listWidget->item(i)->text();
        qDebug() << cLine;
        out << cLine << endl;
    }

    file.close();
}

void MainWindow::on_actionRefresh_triggered()
{
    ui->listWidget->clear();

    QString currentFileName = "E:/default.voc";
    QFile file(currentFileName);

    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(this, "Hiba", "Fájl betöltési hiba.");
        return;
    }

    QTextStream in(&file);
    QString cLine;
    while (!in.atEnd()) {
        cLine = in.readLine();
        ui->listWidget->addItem(cLine);
    }

    file.close();
}


void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    on_actionRename_triggered();
}

void MainWindow::on_actionNewWord_triggered()
{
    NewWordDialog newWordDlg;

    if (newWordDlg.exec() == QDialog::Accepted) {
        ui->listWidget->addItem(newWordDlg.getWord() + "=" + newWordDlg.getMeaning());
    }
}

void MainWindow::on_actionAboutQt_triggered()
{
    QMessageBox::aboutQt(this);
}
