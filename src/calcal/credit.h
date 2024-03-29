#ifndef CREDIT_H
#define CREDIT_H

#include <QDialog>
#include <locale.h>
namespace Ui {
class Credit;
}

class Credit : public QDialog {
  Q_OBJECT

 public:
  explicit Credit(QWidget *parent = nullptr);
  ~Credit();

 private:
  Ui::Credit *ui;

 public slots:
  void set_values(double sum, double overpay, double monthpay);
};

#endif  // CREDIT_H
