#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QApplication>

#include "Task.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_calendarWidget_selectionChanged();

    void on_dateTimeEdit_dateTimeChanged(List list);

    void on_pushButton_clicked(List list);

    void on_listWidget_itemClicked();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_listWidget_2_itemClicked(List list, Task task);

    void on_listWidget_2_itemDoubleClicked(QListWidgetItem *item);

    void on_timeEdit_userTimeChanged(List list);

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};



#endif // MAINWINDOW_H
