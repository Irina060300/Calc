#include "credit.h"

#include "ui_credit.h"

Credit::Credit(QWidget *parent) : QDialog(parent), ui(new Ui::Credit) {
  ui->setupUi(this);
}

Credit::~Credit() { delete ui; }

void Credit::set_values(double sum, double overpay, double monthpay) {
  setlocale(LC_NUMERIC, "C");
  QString res_sum = QString::number(sum, 'f', 2),
          res_overpay = QString::number(overpay, 'f', 2),
          res_monthpay = QString::number(monthpay, 'f', 2);
  ui->lineEdit_sum->setText(res_sum);
  ui->lineEdit_over_pay->setText(res_overpay);
  ui->lineEdit_month_pay->setText(res_monthpay);
}
