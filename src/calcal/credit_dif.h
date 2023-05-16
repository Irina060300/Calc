#ifndef CREDIT_DIF_H
#define CREDIT_DIF_H

#include <QDialog>

namespace Ui {
class Credit_dif;
}

class Credit_dif : public QDialog {
  Q_OBJECT

 public:
  explicit Credit_dif(QWidget *parent = nullptr);
  ~Credit_dif();

 private:
  Ui::Credit_dif *ui;
 public slots:
  void set_values(double *month_pay, double sum, double over_pay, int size);
};

#endif  // CREDIT_DIF_H
