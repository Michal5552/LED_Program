/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPomoc;
    QAction *actionO_Autorze;
    QWidget *centralWidget;
    QLabel *LabelPicture;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayoutPinsValues;
    QLabel *labelPins;
    QLabel *labelRedPinsValues;
    QLabel *labelRedValuePinsValues;
    QLabel *labelGreenPinsValues;
    QLabel *labelGreenValuePinsValues;
    QLabel *labelBluePinsValues;
    QLabel *labelBlueValuePinsValues;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayoutPictureModuls;
    QHBoxLayout *horizontalLayoutPictureLabels;
    QLabel *labelRedPict;
    QLabel *labelGndPict;
    QLabel *labelGreenPict;
    QLabel *labelBluePict;
    QComboBox *comboBoxColor;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayoutRgbModelHsvModel;
    QVBoxLayout *verticalLayoutRgbModel;
    QLabel *labelRgbModel;
    QLabel *labelRedRgbModel;
    QLabel *labelRedValueRgbModel;
    QLabel *labelGreenRgbModel;
    QLabel *labelGreenValueRgbModel;
    QLabel *labelBlueRgbModel;
    QLabel *labelBlueValueRgbModel;
    QVBoxLayout *verticalLayoutHsvModel;
    QLabel *labelHsvModel;
    QLabel *labelHueHsvModel;
    QLabel *labelHueValueHsvModel;
    QLabel *labelSaturationHsvModel;
    QLabel *labelSaturationValueHsvModel;
    QLabel *labelValueHsvModel;
    QLabel *labelValueValueHsvModel;
    QMenuBar *menuBar;
    QMenu *menuPomoc;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(845, 574);
        actionPomoc = new QAction(MainWindow);
        actionPomoc->setObjectName(QString::fromUtf8("actionPomoc"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/HelpImages/Pictures/Utilities.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPomoc->setIcon(icon);
        actionO_Autorze = new QAction(MainWindow);
        actionO_Autorze->setObjectName(QString::fromUtf8("actionO_Autorze"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/HelpImages/Pictures/info.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionO_Autorze->setIcon(icon1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        LabelPicture = new QLabel(centralWidget);
        LabelPicture->setObjectName(QString::fromUtf8("LabelPicture"));
        LabelPicture->setGeometry(QRect(50, 0, 151, 391));
        LabelPicture->setPixmap(QPixmap(QString::fromUtf8("Pictures/RED.png")));
        LabelPicture->setScaledContents(true);
        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(410, 270, 263, 225));
        verticalLayoutPinsValues = new QVBoxLayout(layoutWidget_2);
        verticalLayoutPinsValues->setSpacing(6);
        verticalLayoutPinsValues->setContentsMargins(11, 11, 11, 11);
        verticalLayoutPinsValues->setObjectName(QString::fromUtf8("verticalLayoutPinsValues"));
        verticalLayoutPinsValues->setContentsMargins(0, 0, 0, 0);
        labelPins = new QLabel(layoutWidget_2);
        labelPins->setObjectName(QString::fromUtf8("labelPins"));

        verticalLayoutPinsValues->addWidget(labelPins);

        labelRedPinsValues = new QLabel(layoutWidget_2);
        labelRedPinsValues->setObjectName(QString::fromUtf8("labelRedPinsValues"));

        verticalLayoutPinsValues->addWidget(labelRedPinsValues);

        labelRedValuePinsValues = new QLabel(layoutWidget_2);
        labelRedValuePinsValues->setObjectName(QString::fromUtf8("labelRedValuePinsValues"));

        verticalLayoutPinsValues->addWidget(labelRedValuePinsValues);

        labelGreenPinsValues = new QLabel(layoutWidget_2);
        labelGreenPinsValues->setObjectName(QString::fromUtf8("labelGreenPinsValues"));

        verticalLayoutPinsValues->addWidget(labelGreenPinsValues);

        labelGreenValuePinsValues = new QLabel(layoutWidget_2);
        labelGreenValuePinsValues->setObjectName(QString::fromUtf8("labelGreenValuePinsValues"));

        verticalLayoutPinsValues->addWidget(labelGreenValuePinsValues);

        labelBluePinsValues = new QLabel(layoutWidget_2);
        labelBluePinsValues->setObjectName(QString::fromUtf8("labelBluePinsValues"));

        verticalLayoutPinsValues->addWidget(labelBluePinsValues);

        labelBlueValuePinsValues = new QLabel(layoutWidget_2);
        labelBlueValuePinsValues->setObjectName(QString::fromUtf8("labelBlueValuePinsValues"));

        verticalLayoutPinsValues->addWidget(labelBlueValuePinsValues);

        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 380, 191, 93));
        verticalLayoutPictureModuls = new QVBoxLayout(layoutWidget);
        verticalLayoutPictureModuls->setSpacing(6);
        verticalLayoutPictureModuls->setContentsMargins(11, 11, 11, 11);
        verticalLayoutPictureModuls->setObjectName(QString::fromUtf8("verticalLayoutPictureModuls"));
        verticalLayoutPictureModuls->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutPictureLabels = new QHBoxLayout();
        horizontalLayoutPictureLabels->setSpacing(6);
        horizontalLayoutPictureLabels->setObjectName(QString::fromUtf8("horizontalLayoutPictureLabels"));
        labelRedPict = new QLabel(layoutWidget);
        labelRedPict->setObjectName(QString::fromUtf8("labelRedPict"));

        horizontalLayoutPictureLabels->addWidget(labelRedPict);

        labelGndPict = new QLabel(layoutWidget);
        labelGndPict->setObjectName(QString::fromUtf8("labelGndPict"));

        horizontalLayoutPictureLabels->addWidget(labelGndPict);

        labelGreenPict = new QLabel(layoutWidget);
        labelGreenPict->setObjectName(QString::fromUtf8("labelGreenPict"));

        horizontalLayoutPictureLabels->addWidget(labelGreenPict);

        labelBluePict = new QLabel(layoutWidget);
        labelBluePict->setObjectName(QString::fromUtf8("labelBluePict"));

        horizontalLayoutPictureLabels->addWidget(labelBluePict);


        verticalLayoutPictureModuls->addLayout(horizontalLayoutPictureLabels);

        comboBoxColor = new QComboBox(layoutWidget);
        comboBoxColor->setObjectName(QString::fromUtf8("comboBoxColor"));

        verticalLayoutPictureModuls->addWidget(comboBoxColor);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(240, 10, 601, 227));
        horizontalLayoutRgbModelHsvModel = new QHBoxLayout(layoutWidget1);
        horizontalLayoutRgbModelHsvModel->setSpacing(6);
        horizontalLayoutRgbModelHsvModel->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutRgbModelHsvModel->setObjectName(QString::fromUtf8("horizontalLayoutRgbModelHsvModel"));
        horizontalLayoutRgbModelHsvModel->setContentsMargins(0, 0, 0, 0);
        verticalLayoutRgbModel = new QVBoxLayout();
        verticalLayoutRgbModel->setSpacing(6);
        verticalLayoutRgbModel->setObjectName(QString::fromUtf8("verticalLayoutRgbModel"));
        labelRgbModel = new QLabel(layoutWidget1);
        labelRgbModel->setObjectName(QString::fromUtf8("labelRgbModel"));

        verticalLayoutRgbModel->addWidget(labelRgbModel);

        labelRedRgbModel = new QLabel(layoutWidget1);
        labelRedRgbModel->setObjectName(QString::fromUtf8("labelRedRgbModel"));

        verticalLayoutRgbModel->addWidget(labelRedRgbModel);

        labelRedValueRgbModel = new QLabel(layoutWidget1);
        labelRedValueRgbModel->setObjectName(QString::fromUtf8("labelRedValueRgbModel"));

        verticalLayoutRgbModel->addWidget(labelRedValueRgbModel);

        labelGreenRgbModel = new QLabel(layoutWidget1);
        labelGreenRgbModel->setObjectName(QString::fromUtf8("labelGreenRgbModel"));

        verticalLayoutRgbModel->addWidget(labelGreenRgbModel);

        labelGreenValueRgbModel = new QLabel(layoutWidget1);
        labelGreenValueRgbModel->setObjectName(QString::fromUtf8("labelGreenValueRgbModel"));

        verticalLayoutRgbModel->addWidget(labelGreenValueRgbModel);

        labelBlueRgbModel = new QLabel(layoutWidget1);
        labelBlueRgbModel->setObjectName(QString::fromUtf8("labelBlueRgbModel"));

        verticalLayoutRgbModel->addWidget(labelBlueRgbModel);

        labelBlueValueRgbModel = new QLabel(layoutWidget1);
        labelBlueValueRgbModel->setObjectName(QString::fromUtf8("labelBlueValueRgbModel"));

        verticalLayoutRgbModel->addWidget(labelBlueValueRgbModel);


        horizontalLayoutRgbModelHsvModel->addLayout(verticalLayoutRgbModel);

        verticalLayoutHsvModel = new QVBoxLayout();
        verticalLayoutHsvModel->setSpacing(6);
        verticalLayoutHsvModel->setObjectName(QString::fromUtf8("verticalLayoutHsvModel"));
        labelHsvModel = new QLabel(layoutWidget1);
        labelHsvModel->setObjectName(QString::fromUtf8("labelHsvModel"));

        verticalLayoutHsvModel->addWidget(labelHsvModel);

        labelHueHsvModel = new QLabel(layoutWidget1);
        labelHueHsvModel->setObjectName(QString::fromUtf8("labelHueHsvModel"));

        verticalLayoutHsvModel->addWidget(labelHueHsvModel);

        labelHueValueHsvModel = new QLabel(layoutWidget1);
        labelHueValueHsvModel->setObjectName(QString::fromUtf8("labelHueValueHsvModel"));

        verticalLayoutHsvModel->addWidget(labelHueValueHsvModel);

        labelSaturationHsvModel = new QLabel(layoutWidget1);
        labelSaturationHsvModel->setObjectName(QString::fromUtf8("labelSaturationHsvModel"));

        verticalLayoutHsvModel->addWidget(labelSaturationHsvModel);

        labelSaturationValueHsvModel = new QLabel(layoutWidget1);
        labelSaturationValueHsvModel->setObjectName(QString::fromUtf8("labelSaturationValueHsvModel"));

        verticalLayoutHsvModel->addWidget(labelSaturationValueHsvModel);

        labelValueHsvModel = new QLabel(layoutWidget1);
        labelValueHsvModel->setObjectName(QString::fromUtf8("labelValueHsvModel"));

        verticalLayoutHsvModel->addWidget(labelValueHsvModel);

        labelValueValueHsvModel = new QLabel(layoutWidget1);
        labelValueValueHsvModel->setObjectName(QString::fromUtf8("labelValueValueHsvModel"));

        verticalLayoutHsvModel->addWidget(labelValueValueHsvModel);


        horizontalLayoutRgbModelHsvModel->addLayout(verticalLayoutHsvModel);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 845, 22));
        menuPomoc = new QMenu(menuBar);
        menuPomoc->setObjectName(QString::fromUtf8("menuPomoc"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuPomoc->menuAction());
        menuPomoc->addAction(actionPomoc);
        menuPomoc->addAction(actionO_Autorze);
        mainToolBar->addAction(actionPomoc);
        mainToolBar->addAction(actionO_Autorze);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionPomoc->setText(QCoreApplication::translate("MainWindow", "Pomoc", nullptr));
        actionO_Autorze->setText(QCoreApplication::translate("MainWindow", "O Autorze", nullptr));
        LabelPicture->setText(QString());
        labelPins->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; color:#000000;\">PINY</span></p></body></html>", nullptr));
        labelRedPinsValues->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">CZERWONY(0 : 5V)</span></p></body></html>", nullptr));
        labelRedValuePinsValues->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">CZERWONY WARTO\305\232\304\206</span></p></body></html>", nullptr));
        labelGreenPinsValues->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">ZIELONY(0 : 5V)</span></p></body></html>", nullptr));
        labelGreenValuePinsValues->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">ZIELONY WARTO\305\232\304\206</span></p></body></html>", nullptr));
        labelBluePinsValues->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">NIEBIESKI(0 : 5V)</span></p></body></html>", nullptr));
        labelBlueValuePinsValues->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">NIEBIESKI WARTO\305\232\304\206</span></p></body></html>", nullptr));
        labelRedPict->setText(QCoreApplication::translate("MainWindow", "CZ", nullptr));
        labelGndPict->setText(QCoreApplication::translate("MainWindow", "GND", nullptr));
        labelGreenPict->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        labelBluePict->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        labelRgbModel->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">MODEL </span><span style=\" font-size:36pt; color:#fc0006;\">R</span><span style=\" font-size:36pt; color:#00ff00;\">G</span><span style=\" font-size:36pt; color:#0000ff;\">B</span></p></body></html>", nullptr));
        labelRedRgbModel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">CZERWONY( 0 : 255)</span></p></body></html>", nullptr));
        labelRedValueRgbModel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">CZERWONY WARTO\305\232\304\206</span></p></body></html>", nullptr));
        labelGreenRgbModel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">ZIELONY( 0 : 255)</span></p></body></html>", nullptr));
        labelGreenValueRgbModel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">ZIELONY WARTO\305\232\304\206</span></p></body></html>", nullptr));
        labelBlueRgbModel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">NIEBIESKI(0 : 255)</span></p></body></html>", nullptr));
        labelBlueValueRgbModel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">NIEBIESKI WARTO\305\232\304\206</span></p></body></html>", nullptr));
        labelHsvModel->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">MODEL </span><span style=\" font-size:36pt; color:#bdb86b;\">H</span><span style=\" font-size:36pt; color:#666666;\">S</span><span style=\" font-size:36pt; color:#800002;\">V</span></p></body></html>", nullptr));
        labelHueHsvModel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">ODCIE\305\203(0 : 360</span><span style=\" font-family:'Helvetica'; font-size:18pt; color:#000000;\">\302\260)</span></p></body></html>", nullptr));
        labelHueValueHsvModel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">ODCIE\305\203 WARTO\305\232\304\206</span></p></body></html>", nullptr));
        labelSaturationHsvModel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">NASYCENIE(0 : 100%)</span></p></body></html>", nullptr));
        labelSaturationValueHsvModel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">NASYCENIE WARTO\305\232\304\206</span></p></body></html>", nullptr));
        labelValueHsvModel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">WARTO\305\232\304\206(0 : 100%)</span></p></body></html>", nullptr));
        labelValueValueHsvModel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">WARTO\305\232\304\206 WARTO\305\232\304\206</span></p></body></html>", nullptr));
        menuPomoc->setTitle(QCoreApplication::translate("MainWindow", "Pomoc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
