/********************************************************************************
** Form generated from reading UI file 'credit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_H
#define UI_CREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Credit
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_sum;
    QLabel *label;
    QLineEdit *lineEdit_over_pay;
    QLabel *label_2;
    QLineEdit *lineEdit_month_pay;

    void setupUi(QDialog *Credit)
    {
        if (Credit->objectName().isEmpty())
            Credit->setObjectName(QString::fromUtf8("Credit"));
        Credit->resize(283, 144);
        gridLayout = new QGridLayout(Credit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(Credit);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        lineEdit_sum = new QLineEdit(Credit);
        lineEdit_sum->setObjectName(QString::fromUtf8("lineEdit_sum"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_sum->sizePolicy().hasHeightForWidth());
        lineEdit_sum->setSizePolicy(sizePolicy);
        lineEdit_sum->setMinimumSize(QSize(70, 20));
        lineEdit_sum->setSizeIncrement(QSize(0, 0));
        lineEdit_sum->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 1px;\n"
"    padding: 0 8px;\n"
"    background: #FFF8F0;\n"
"    selection-background-color: darkgray;\n"
"}"));
        lineEdit_sum->setReadOnly(true);

        gridLayout->addWidget(lineEdit_sum, 0, 1, 1, 1);

        label = new QLabel(Credit);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit_over_pay = new QLineEdit(Credit);
        lineEdit_over_pay->setObjectName(QString::fromUtf8("lineEdit_over_pay"));
        sizePolicy.setHeightForWidth(lineEdit_over_pay->sizePolicy().hasHeightForWidth());
        lineEdit_over_pay->setSizePolicy(sizePolicy);
        lineEdit_over_pay->setMinimumSize(QSize(70, 20));
        lineEdit_over_pay->setSizeIncrement(QSize(0, 0));
        lineEdit_over_pay->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 1px;\n"
"    padding: 0 8px;\n"
"    background: #FFF8F0;\n"
"    selection-background-color: darkgray;\n"
"}"));
        lineEdit_over_pay->setReadOnly(true);

        gridLayout->addWidget(lineEdit_over_pay, 1, 1, 1, 1);

        label_2 = new QLabel(Credit);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEdit_month_pay = new QLineEdit(Credit);
        lineEdit_month_pay->setObjectName(QString::fromUtf8("lineEdit_month_pay"));
        sizePolicy.setHeightForWidth(lineEdit_month_pay->sizePolicy().hasHeightForWidth());
        lineEdit_month_pay->setSizePolicy(sizePolicy);
        lineEdit_month_pay->setMinimumSize(QSize(70, 20));
        lineEdit_month_pay->setSizeIncrement(QSize(0, 0));
        lineEdit_month_pay->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 1px;\n"
"    padding: 0 8px;\n"
"    background: #FFF8F0;\n"
"    selection-background-color: darkgray;\n"
"}"));
        lineEdit_month_pay->setReadOnly(true);

        gridLayout->addWidget(lineEdit_month_pay, 2, 1, 1, 1);


        retranslateUi(Credit);

        QMetaObject::connectSlotsByName(Credit);
    } // setupUi

    void retranslateUi(QDialog *Credit)
    {
        Credit->setWindowTitle(QCoreApplication::translate("Credit", "Credit_annuity", nullptr));
        label_3->setText(QCoreApplication::translate("Credit", "Debt + interest", nullptr));
        lineEdit_sum->setText(QString());
        label->setText(QCoreApplication::translate("Credit", "Overpayment", nullptr));
        lineEdit_over_pay->setText(QString());
        label_2->setText(QCoreApplication::translate("Credit", "Monthly payment", nullptr));
        lineEdit_month_pay->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Credit: public Ui_Credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H
