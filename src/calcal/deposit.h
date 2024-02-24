#ifndef DEPOSIT_H
#define DEPOSIT_H

#include <locale.h>

#include <QDialog>
namespace Ui {
class Deposit;
}

class Deposit : public QDialog {
  Q_OBJECT

 public:
  explicit Deposit(QWidget *parent = nullptr);
  ~Deposit();

 private:
  Ui::Deposit *ui;

 public slots:
  void set_values(double percent, double sum, double nalog);
};

#endif  // DEPOSIT_H
