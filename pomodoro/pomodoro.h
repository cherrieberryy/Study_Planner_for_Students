#ifndef POMODORO_H
#define POMODORO_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class pomodoro; }
QT_END_NAMESPACE

class pomodoro : public QMainWindow
{
    Q_OBJECT

public:
    pomodoro(QWidget *parent = nullptr);
    ~pomodoro();

private slots:
    void starttaskbutton();
    void startbreakbutton();
    void updatetimer();

    //void tochoice();


private:
    Ui::pomodoro *ui;

    QTimer *timer;

    int timeremaining;
    bool istasktime;

    void startTimer(int minute);
    void stopTimer();
    void updatelabel();
};

#endif // POMODOROWINDOW_H
