#include "credit_dif.h"

#include "ui_credit_dif.h"

Credit_dif::Credit_dif(QWidget *parent)
    : QDialog(parent), ui(new Ui::Credit_dif) {
  ui->setupUi(this);
}

Credit_dif::~Credit_dif() { delete ui; }

void Credit_dif::set_values(double *month_pay, double sum, double over_pay,
                            int size) {
  QString res_sum = QString::number(sum, 'f', 2),
          res_overpay = QString::number(over_pay, 'f', 2),
          res_monthpay /*= QString::number(month_pay, 'g', 7)*/;
  //    ui->tableWidget->setColumnWidth(0);
  ui->tableWidget->horizontalHeader()->setSectionResizeMode(
      0, QHeaderView::Stretch);
  ui->lineEdit_sum->setText(res_sum);
  ui->lineEdit_over_pay->setText(res_overpay);
  for (int i = 0; i < size; i++) {
    ui->tableWidget->insertRow(i);
    ui->tableWidget->setRowHeight(i, 20);
    res_monthpay = QString::number(month_pay[i], 'f', 2);
    ui->tableWidget->setItem(i, 0, new QTableWidgetItem(res_monthpay));
  }
  //    ui->tableWidget->insertColumn(2);
  //    ui->tableWidget->insertColumn(1);
}
