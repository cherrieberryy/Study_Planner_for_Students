#ifndef TASKWINDOW_H
#define TASKWINDOW_H

#include <QDialog>

namespace Ui {
class taskwindow;
}

class taskwindow : public QDialog
{
    Q_OBJECT

public:
    explicit taskwindow(QWidget *parent = nullptr);
    ~taskwindow();

private slots:
    void addtaskbutton();
    void edittaskbutton();
    void removetaskbutton();
    void updatetasklist();

    void tochoicet();

private:
    Ui::taskwindow *ui;

    bool istaskediting;
};

#endif // TASKWINDOW_H
