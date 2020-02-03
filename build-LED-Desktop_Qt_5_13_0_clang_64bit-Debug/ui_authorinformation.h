/********************************************************************************
** Form generated from reading UI file 'authorinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORINFORMATION_H
#define UI_AUTHORINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_AuthorInformation
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *AuthorInformation)
    {
        if (AuthorInformation->objectName().isEmpty())
            AuthorInformation->setObjectName(QString::fromUtf8("AuthorInformation"));
        AuthorInformation->resize(845, 574);
        pushButton = new QPushButton(AuthorInformation);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 470, 181, 71));
        textBrowser = new QTextBrowser(AuthorInformation);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 861, 441));

        retranslateUi(AuthorInformation);

        QMetaObject::connectSlotsByName(AuthorInformation);
    } // setupUi

    void retranslateUi(QDialog *AuthorInformation)
    {
        AuthorInformation->setWindowTitle(QCoreApplication::translate("AuthorInformation", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("AuthorInformation", "WYJ\305\232CIE", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("AuthorInformation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:48pt;\">INFORMACJE </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:48pt;\">O </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:48pt;\">AUTORZE</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-le"
                        "ft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:48pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">IMI\304\230 I NAZWISKO : Micha\305\202 Kopiel</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">  	  EMAIL : michkop76@gmail.com</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">     STANOWISKO : Student</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthorInformation: public Ui_AuthorInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORINFORMATION_H
