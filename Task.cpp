#include "Task.h"

void Task::Counter(unsigned int number){
    number++;
}

QString Task::GiveLine(){
    return text;
}

unsigned int Task::GiveNumber(){
    return number;
}

QDate Task::GiveDate(){
    return date;
}

void Task::AddLine(QString line){
    text = line;
}

void Task::GetDate(QDate newDate){
    date = newDate;
}

void Task::GetTime(QTime newTime){
    time = newTime;
}

void Task::GetFont(QFont newFont){
    font = newFont;
}


void List::Add(Task task){
    tasksList.push_back(task);
}
unsigned int List::GetNum(unsigned int num){
    return tasksList[num].GiveNumber();
}
size_t List::GetSize(){
    return tasksList.size();
}
