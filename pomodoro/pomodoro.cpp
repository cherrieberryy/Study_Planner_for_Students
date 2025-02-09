#include "pomodoro.h"
#include "ui_pomodoro.h"

pomodoro::pomodoro(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::pomodoro)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &pomodoro::updatetimer);

    timeremaining = 0;
    istasktime = true;
    updatelabel();

    connect(ui->button_taskstart, SIGNAL(clicked()), this, SLOT(starttaskbutton()));
    connect(ui->button_startbreak, SIGNAL(clicked()), this, SLOT(startbreakbutton()));

    //connect(ui->tochoice, SIGNAL(clicked()), this, SLOT(tochoice()));
}

pomodoro::~pomodoro()
{
    delete ui;
}


void pomodoro::starttaskbutton()
{
    startTimer(25);
    istasktime = true;
}

void pomodoro::startbreakbutton()
{
    startTimer(5);
    istasktime = false;
}

void pomodoro::updatetimer()
{
    if(timeremaining > 0){
        timeremaining--;
        updatelabel();
    } else {
        stopTimer();
        if(istasktime){
            startTimer(5);
            istasktime = false;
        } else {
            startTimer(25);
            istasktime = true;
        }
    }
}

void pomodoro::startTimer(int minutes)
{
    timeremaining = minutes * 60;
    updatelabel();
    timer->start(1000); // Update every second
}

void pomodoro::stopTimer()
{
    timer->stop();
}

void pomodoro::updatelabel()
{
    int minutes = timeremaining / 60;
    int seconds = timeremaining % 60;
    ui->label_time->setText(QString("%1 : %2")
                            .arg(minutes, 2, 10, QLatin1Char('0'))
                            .arg(seconds, 2, 10, QLatin1Char('0')));
}





