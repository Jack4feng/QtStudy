#include "information.h"
#include "ui_information.h"
#include"searchtime.h"
#include"idsearch.h"
#include"mainwindow.h"
Information::Information(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Information)
{
    ui->setupUi(this);
}

Information::~Information()
{
    delete ui;
}

void Information::on_pushButton_clicked()
{
    this->close();
    parentWidget()->show();
}

void Information::on_pushButton_2_clicked()
{
    SearchTime *seatime=new SearchTime(this);
    seatime->show();
    this->hide();
}

void Information::on_pushButton_3_clicked()
{
    IDSearch *idsea=new IDSearch(this);
    idsea->show();
    this->hide();
}

Car Information::his_car_c(QString s)
{
    MainWindow *m=(MainWindow *)parentWidget();
    return m->his_car(s);
}

Car Information::Now_car_c(QString s)
{
    MainWindow *m=(MainWindow *)parentWidget();
    return m->Now_car(s);
}
