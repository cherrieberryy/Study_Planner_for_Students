#ifndef STUDYPLAN_H
#define STUDYPLAN_H

#include <QMainWindow>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QString>
#include <QTextStream>

QT_BEGIN_NAMESPACE
namespace Ui { class studyplan; }
QT_END_NAMESPACE

class studyplan : public QMainWindow
{
    Q_OBJECT

public:
    studyplan(QWidget *parent = nullptr);
    ~studyplan();

private slots:
    void addstudybutton();
    void editstudybutton();
    void removestudybutton();
    void updatestudylist();

    //void tochoice();

private:
    Ui::studyplan *ui;

    bool isstudyediting;
};
#endif // STUDYPLAN_H
