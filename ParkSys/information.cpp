#include "information.h"
#include "ui_information.h"
#include"searchtime.h"
#include"idsearch.h"
Information::Information(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Information)
{
    ui->setupUi(this);
    //seatime=new SearchTime(this);
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
    seatime=new SearchTime(this);
    seatime->show();
    this->hide();
}

void Information::on_pushButton_3_clicked()
{
    idsea=new IDSearch(this);
    idsea->show();
    this->hide();
}