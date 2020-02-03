#include "authorinformation.h"
#include "../build-LED-Desktop_Qt_5_13_0_clang_64bit-Debug//ui_authorinformation.h"

AuthorInformation::AuthorInformation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AuthorInformation)
{
    ui->setupUi(this);
    setWindowTitle("INFORMACJE O AUTORZE");
}

AuthorInformation::~AuthorInformation()
{
    delete ui;
}

void AuthorInformation::on_pushButton_clicked()
{
    close();
}
