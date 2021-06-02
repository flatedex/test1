#ifndef TASK_H
#define TASK_H

#include <QLabel>
#include <QListView>
#include <QString>
#include <QLineEdit>
#include <QListWidgetItem>
#include <QTimeEdit>
#include <vector>

//Класс объектов в list'ах
class Task
{

public:
    Task(unsigned int num){
        number = num;
    }

    ~Task() = default;

    void Counter(unsigned int number);

    QString GiveLine();

    unsigned int GiveNumber();

    QDate GiveDate();

    void AddLine(QString line);

    void GetDate(QDate newDate);

    void GetTime(QTime newTime);

    void GetFont(QFont newFont);

private:
    QString text = "";
    QDate date;
    QTime time;
    QFont font;
    unsigned int number;
};

class List
{
private:
    std::vector<Task> tasksList;

public:
    Task& operator[](const int index){
        return tasksList[index];
    };

    void Add(Task task);

    unsigned int GetNum(unsigned int num);

    size_t GetSize();
};

#endif // TASK_H
