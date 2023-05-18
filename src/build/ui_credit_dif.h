/********************************************************************************
** Form generated from reading UI file 'credit_dif.ui'
**
** Created by: Qt User Interface Compiler version 5.15.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_DIF_H
#define UI_CREDIT_DIF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Credit_dif
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_sum;
    QLabel *label;
    QLineEdit *lineEdit_over_pay;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Credit_dif)
    {
        if (Credit_dif->objectName().isEmpty())
            Credit_dif->setObjectName(QString::fromUtf8("Credit_dif"));
        Credit_dif->resize(503, 401);
        gridLayout = new QGridLayout(Credit_dif);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(Credit_dif);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        lineEdit_sum = new QLineEdit(Credit_dif);
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

        label = new QLabel(Credit_dif);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit_over_pay = new QLineEdit(Credit_dif);
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

        tableWidget = new QTableWidget(Credit_dif);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMinimumSize(QSize(400, 250));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 2);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 10);
        gridLayout->setColumnStretch(1, 1);

        retranslateUi(Credit_dif);

        QMetaObject::connectSlotsByName(Credit_dif);
    } // setupUi

    void retranslateUi(QDialog *Credit_dif)
    {
        Credit_dif->setWindowTitle(QCoreApplication::translate("Credit_dif", "Credit_differentied", nullptr));
        label_3->setText(QCoreApplication::translate("Credit_dif", "Debt + interest", nullptr));
        lineEdit_sum->setText(QString());
        label->setText(QCoreApplication::translate("Credit_dif", "Overpayment", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Credit_dif", "Monthly Payment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credit_dif: public Ui_Credit_dif {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_DIF_H
