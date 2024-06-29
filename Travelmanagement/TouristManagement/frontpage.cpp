#include "frontpage.h"
#include "ui_frontpage.h"

frontpage::frontpage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::frontpage)
{
    ui->setupUi(this);
}

frontpage::~frontpage()
{
    delete ui;
}
