#include "TheAdvanced.h"
#include "ui_TheAdvanced.h"

TheAdvanced::TheAdvanced(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TheAdvanced)
{
    ui->setupUi(this);
}

TheAdvanced::~TheAdvanced()
{
    delete ui;
}
