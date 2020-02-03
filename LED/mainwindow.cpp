#include "mainwindow.h"
#include "../build-LED-Desktop_Qt_5_13_0_clang_64bit-Debug/ui_mainwindow.h"
#include <QPixmap>
#include <QString>
#include <QTextStream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow),
        HD0{ new HelpDialog { this } },
        AI0{new AuthorInformation{this } },
        first_serialization_flag{ true },
        Led_Component0{ new Led_Component{} },
        serialization{ new QFile{ "/Users/michal/Desktop/LED/serialization.txt" } }
{
    ui->setupUi(this);

    this->statusBar()->setSizeGripEnabled(false);

    load_pictures();
    first_serialization();
    ui->comboBoxColor->setCurrentIndex(static_cast<int> (Led_Component0->getActualColor() ) );

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBoxColor_currentIndexChanged(const QString &arg1){

    QPixmap picture;
    int color{ ui->comboBoxColor->currentIndex() };


    if (first_serialization_flag) {

        first_serialization();
        first_serialization_flag = !first_serialization_flag;
    }

    else
        Led_Component0->setActualColor(static_cast<Led_Component::COLOR> (color));

    picture = set_picture();

    ui->LabelPicture->setPixmap(picture.scaled(377, 1137, Qt::KeepAspectRatio));

    set_rgb_model();
    set_hsv_model();
    set_pins();

    save_serialization_file();
}

void MainWindow::on_actionPomoc_triggered(){

    HD0->setModal(true);
    HD0->exec();
}

void MainWindow::on_actionO_Autorze_triggered()
{
    AI0->setModal(true);
    AI0->exec();
}

void MainWindow::load_pictures() const {

    ui->comboBoxColor->addItem("Czerwony");
    ui->comboBoxColor->addItem("Zielony");
    ui->comboBoxColor->addItem("Niebieski");
    ui->comboBoxColor->addItem("Magenta");
    ui->comboBoxColor->addItem("Żółty");
    ui->comboBoxColor->addItem("Cyjan");
    ui->comboBoxColor->addItem("Wiśniowy");
    ui->comboBoxColor->addItem("Miętowy");
    ui->comboBoxColor->addItem("Koralowy");
    ui->comboBoxColor->addItem("Khaki");
}

QPixmap MainWindow::set_picture() const{

    switch(Led_Component0->getActualColor()){

        case     Led_Component::RED : return QPixmap { "/Users/michal/Desktop/LED/Pictures/RED.png" };
        case   Led_Component::GREEN : return QPixmap { "/Users/michal/Desktop/LED/Pictures/GREEN.png" };
        case    Led_Component::BLUE : return QPixmap { "/Users/michal/Desktop/LED/Pictures/BLUE.png" };
        case Led_Component::MAGENTA : return QPixmap { "/Users/michal/Desktop/LED/Pictures/MAGENTA.png" };
        case  Led_Component::YELLOW : return QPixmap { "/Users/michal/Desktop/LED/Pictures/YELLOW.png" };
        case  Led_Component::CYAN   : return QPixmap { "/Users/michal/Desktop/LED/Pictures/CYAN.png" };
        case  Led_Component::CHERRY : return QPixmap { "/Users/michal/Desktop/LED/Pictures/CHERRY.png" };
        case  Led_Component::MINT   : return QPixmap { "/Users/michal/Desktop/LED/Pictures/MINT.png" };
        case  Led_Component::CORAL  : return QPixmap { "/Users/michal/Desktop/LED/Pictures/CORAL.png" };
        case  Led_Component::KHAKI  : return QPixmap { "/Users/michal/Desktop/LED/Pictures/KHAKI.png" };
    }
}

void MainWindow::first_serialization() {

    serialization->open(QFile::ReadOnly | QFile::Text);

    QTextStream in{& *serialization };
    QString serialization_text{ in.readAll() };

    Led_Component0->setActualColor(static_cast<Led_Component::COLOR>(serialization_text.toStdString()[0] - 48) );
    //Close Area
    serialization->flush();
    serialization->close();
    //Close Area



}

void MainWindow::save_serialization_file() const {

    //Open Area
    serialization->open(QFile::WriteOnly | QFile::Truncate | QFile::Text);

    QTextStream out{ & *serialization };
    //Open Area

    //Update Area
    out << static_cast<int> (Led_Component0->getActualColor()) << '\n';

    //RGB Model
    out << Led_Component0->getRgbModel()[0] << '\n';
    out << Led_Component0->getRgbModel()[1] << '\n';
    out << Led_Component0->getRgbModel()[2] << '\n';
    //RGB Model

    //HSV Model
    out << Led_Component0->getHsvModel()[0] << '\n';
    out << Led_Component0->getHsvModel()[1] << '\n';
    out << Led_Component0->getHsvModel()[2] << '\n';
    // HSV Model

    //Pins
    out << Led_Component0->getPinsValues()[0] << '\n';
    out << Led_Component0->getPinsValues()[1] << '\n';
    out << Led_Component0->getPinsValues()[2];
    //Pins
    //Update Area

    //Close Area
    serialization->flush();
    serialization->close();
    //Close Area
}



void MainWindow::set_rgb_model() const {

    QFont label_font;


    label_font.setPointSize(18);

    ui->labelRedValueRgbModel->setFont(label_font);
    ui->labelRedValueRgbModel->setAlignment(Qt::AlignCenter);
    ui->labelRedValueRgbModel->setText(QString::number(Led_Component0->getRgbModel()[0]));

    ui->labelGreenValueRgbModel->setFont(label_font);
    ui->labelGreenValueRgbModel->setAlignment(Qt::AlignCenter);
    ui->labelGreenValueRgbModel->setText(QString::number(Led_Component0->getRgbModel()[1]));

    ui->labelBlueValueRgbModel->setFont(label_font);
    ui->labelBlueValueRgbModel->setAlignment(Qt::AlignCenter);
    ui->labelBlueValueRgbModel->setText(QString::number(Led_Component0->getRgbModel()[2]));
}

void MainWindow::set_hsv_model() const {

    QFont label_font;


    label_font.setPointSize(18);

    ui->labelHueValueHsvModel->setFont(label_font);
    ui->labelHueValueHsvModel->setAlignment(Qt::AlignCenter);
    ui->labelHueValueHsvModel->setText(QString::number(Led_Component0->getHsvModel()[0]) + "°");

    ui->labelSaturationValueHsvModel->setFont(label_font);
    ui->labelSaturationValueHsvModel->setAlignment(Qt::AlignCenter);
    ui->labelSaturationValueHsvModel->setText(QString::number(Led_Component0->getHsvModel()[1]) + "%");

    ui->labelValueValueHsvModel->setFont(label_font);
    ui->labelValueValueHsvModel->setAlignment(Qt::AlignCenter);
    ui->labelValueValueHsvModel->setText(QString::number(Led_Component0->getHsvModel()[2]) + "%");
}

void MainWindow::set_pins() const {

    QFont label_font;


    label_font.setPointSize(18);

    ui->labelRedValuePinsValues->setFont(label_font);
    ui->labelRedValuePinsValues->setAlignment(Qt::AlignCenter);
    ui->labelRedValuePinsValues->setText(QString::number(Led_Component0->getPinsValues()[0], 'd', 2) + " [V]");

    ui->labelGreenValuePinsValues->setFont(label_font);
    ui->labelGreenValuePinsValues->setAlignment(Qt::AlignCenter);
    ui->labelGreenValuePinsValues->setText(QString::number(Led_Component0->getPinsValues()[1], 'd', 2) + " [V]");

    ui->labelBlueValuePinsValues->setFont(label_font);
    ui->labelBlueValuePinsValues->setAlignment(Qt::AlignCenter);
    ui->labelBlueValuePinsValues->setText((QString::number(Led_Component0->getPinsValues()[2], 'd', 2) + " [V]"));
}
