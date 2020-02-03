#include "helpdialog.h"
#include "../build-LED-Desktop_Qt_5_13_0_clang_64bit-Debug/ui_helpdialog.h"

HelpDialog::HelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelpDialog)
{
    ui->setupUi(this);
    setWindowTitle("POMOC");
}

HelpDialog::~HelpDialog()
{
    delete ui;
}

void HelpDialog::on_pushButtonExit_clicked()
{
    close();
}
