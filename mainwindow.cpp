#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_listWidget_indexesMoved(QString str)
{

}


void MainWindow::on_calendarWidget_selectionChanged()
{

}


void MainWindow::on_dateTimeEdit_dateTimeChanged(const QDateTime &dateTime)
{

}


void MainWindow::on_pushButton_clicked()
{
    QLineEdit *lineEdit = new QLineEdit("");
    QTimeEdit *Time = new QTimeEdit();
    //QString xyi = QTime::toString(*Time);
    QString xyi = ui -> lineEdit -> text() + " " + Time -> text();
    ui->listWidget->addItem(xyi);
    ui->listWidget_2->addItem(xyi);
}


void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QFont font;
    font.setStrikeOut(true);
    ui->listWidget->currentItem()->setFont(font);
    ui->listWidget_2->currentItem()->setFont(font);
}


void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    delete ui->listWidget->currentItem();
    delete ui->listWidget_2->currentItem();
}



void MainWindow::on_listWidget_2_itemClicked(QListWidgetItem *item)
{

}


void MainWindow::on_listWidget_2_itemDoubleClicked(QListWidgetItem *item)
{

}

