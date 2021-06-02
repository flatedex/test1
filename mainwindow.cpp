#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Task.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_calendarWidget_selectionChanged()
{
    QDate *dateTimeEdit = new QDate();
    *dateTimeEdit = ui->calendarWidget->selectedDate();
    ui->dateTimeEdit->setDate(*dateTimeEdit);
    ui->dateTimeEdit->update();
}


void MainWindow::on_dateTimeEdit_dateTimeChanged(List list)
{
    for(size_t i = 0; i < list.GetSize(); i++){
        if(list[i].GiveDate() == ui->dateTimeEdit->date())
            ui->listWidget_2->addItem(list[i].GiveLine());
        ui->dateTimeEdit->update();
        ui->listWidget_2->update();
    }
}


void MainWindow::on_pushButton_clicked(List list)
{
    Task task(list.GetSize());
    QString listItem_1 = ui -> lineEdit -> text() + " | " + ui->calendarWidget->selectedDate().toString() + " | " + ui -> timeEdit -> text();
    QString listItem_2 = ui -> lineEdit -> text() + " | " + ui -> timeEdit -> text();

    task.AddLine(listItem_1);

    list.Add(task);

    ui->listWidget->addItem(task.GiveLine());
}


void MainWindow::on_listWidget_itemClicked()
{
    unsigned int counter = 0;
    Task task(counter);
    List list;
    QFont font;
    font.setStrikeOut(true);
    //ui->listWidget->currentItem()->task.GetNumber();
    ui->listWidget->currentItem()->setFont(font);
    //______________________________________________ui->listWidget_2->currentItem()->setFont(font);  переделать под второй listView
}


void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    delete ui->listWidget->currentItem();
    //______________________________________________delete ui->listWidget_2->currentItem();  переделать под второй listView
}


void MainWindow::on_listWidget_2_itemClicked(List list, Task task)
{
    QFont font;
    font.setStrikeOut(true);

    task.GetFont(font);

    ui->listWidget_2->currentItem()->setFont(font);
}


void MainWindow::on_listWidget_2_itemDoubleClicked(QListWidgetItem *item)
{
    delete ui->listWidget->item(0);
    delete ui->listWidget_2->item(0);
}


void MainWindow::on_timeEdit_userTimeChanged(List list)
{
    Task task(list.GetSize());
    QTime time = ui->timeEdit->time();
    task.GetTime(time);
    ui->dateTimeEdit->setTime(time);
    ui->dateTimeEdit->update();
}


void MainWindow::on_pushButton_2_clicked()
{
    //int number = ui->listWidget->item(ui->listWidget->currentRow());
}

