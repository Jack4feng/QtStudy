 #include "logindialog.h"
#include "ui_logindialog.h"
#include<QMessageBox>
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginbutton_clicked()
{
    // 判断用户名和密码是否正确，
        // 如果错误则弹出警告对话框
        if(ui->usrLineEdit->text() == tr("feng") &&
               ui->pwdLineEdit->text() == tr("123456"))
        {
           accept();
        } else
        {
           QMessageBox::warning(this,"警告","用户名或错误",QMessageBox::Yes);
           ui->usrLineEdit->clear();ui->pwdLineEdit->clear();
           ui->usrLineEdit->setFocus();
        }
}