#include "deposit.h"

#include "ui_deposit.h"

Deposit::Deposit(QWidget *parent) : QDialog(parent), ui(new Ui::Deposit) {
  ui->setupUi(this);
}

Deposit::~Deposit() { delete ui; }

void Deposit::set_values(double percent, double sum, double nalog) {
  setlocale(LC_NUMERIC, "C");
  QString percent_txt = QString::number(sum, 'f', 2),
          sum_txt = QString::number(percent, 'f', 2),
          nalog_txt = QString::number(nalog, 'f', 2);
  ui->sum->setText(percent_txt);
  ui->percent->setText(sum_txt);
  ui->nalog->setText(nalog_txt);
}
