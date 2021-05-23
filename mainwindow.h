#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QApplication>
#include <QLabel>
#include <QListView>
#include <QString>
#include <QLineEdit>
#include <QListWidgetItem>
#include <QTimeEdit>

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

    void on_listWidget_indexesMoved(QString str);

    void on_calendarWidget_selectionChanged();

    void on_dateTimeEdit_dateTimeChanged(const QDateTime &dateTime);

    void on_pushButton_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_listWidget_2_itemClicked(QListWidgetItem *item);

    void on_listWidget_2_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
};

class Task{
private:
    Task();
    ~Task();

public:
    QString text = "";
    int Year = 0;
    int Month = 0;
    int Day = 0;
    int Hour = 0;
};

#endif // MAINWINDOW_H
