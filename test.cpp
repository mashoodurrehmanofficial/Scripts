/********************************************************************************
** Form generated from reading UI file 'untitledffikAW.ui'
**
** Created: Wed 30. Dec 17:51:07 2020
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UNTITLEDFFIKAW_H
#define UNTITLEDFFIKAW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QProgressBar *progressBar;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(783, 503);
        Dialog->setStyleSheet(QString::fromUtf8(""));
        progressBar = new QProgressBar(Dialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(60, 120, 531, 31));
        progressBar->setCursor(QCursor(Qt::WaitCursor));
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar{ \n"
"	background-color: rgb(1, 56, 79);\n"
"	 \n"
"	color: rgb(255, 238, 248);\n"
"	border-style:none;\n"
"	border-radius:15px;text-align:center\n"
"}\n"
"QProgressBar::chunk{    \n"
"border-radius:15px; \n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.602273, x2:1, y2:0.545, stop:0 rgba(243, 6, 224, 255), stop:1 rgba(103, 22, 138, 255));\n"
"}"));
        progressBar->setValue(92);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 232, 151, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 63 16pt \"Bahnschrift SemiBold\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.602273, x2:1, y2:0.545, stop:0 rgba(243, 6, 224, 255), stop:1 rgba(103, 22, 138, 255));\n"
"border-radius:25px;\n"
"box-shadow: 4px 4px 4px 4px #261F1F; \n"
"}"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(false);
        label->setGeometry(QRect(110, 375, 61, 25));
        label->setStyleSheet(QString::fromUtf8(" \n"
"background-color: rgb(43, 43, 43);\n"
"border-radius:12px"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 370, 35, 35));
        label_2->setStyleSheet(QString::fromUtf8(" \n"
" \n"
"background-color: rgb(43, 117, 255);\n"
"border-radius:17px"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog", "Click", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UNTITLEDFFIKAW_H
