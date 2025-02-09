#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(button_login()));
}

login::~login()
{
    delete ui;
}


void login::button_login()
{
    QString name[] = {"rubina", "takiya", "amina", "srewoshi", "shajid"};
    QString code[] = {"ruby", "taki", "meen", "woshi", "shaj"};

    QString uName = ui->lineEdit->text();
    QString uCode = ui->lineEdit_2->text();

    bool found = false;
    for(int i = 0; i < name->length(); i++){
        if(uName == name[i] && uCode == code[i]){
            QMessageBox::information(this, "Welcome", "Welcome to the study planner!", QMessageBox::Ok);

            found = true;
            break;
        }
    }
    if(!found){
        QMessageBox :: information(this, "Error Box",
                                  "invalid user name or password");
    }
}

