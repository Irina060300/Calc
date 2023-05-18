#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDebug>
#include <QDoubleValidator>
#include <QRegExp>
extern "C" {
#include "./../header.h"
}
#include "credit.h"
#include "credit_dif.h"
#include "graph.h"
#include "qcustomplot.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = 0);
  ~MainWindow();

 private:
  Ui::MainWindow *ui;
  Graph *gr;
  Credit *cr;
  Credit_dif *cr_dif;

 private slots:
  void digits_numbers();

 private slots:
  void create_result(char *polish, t_signes *stack, t_numbers *stk,
                     char *new_data, double x);
  void credit_calculator(double loan, double term, double int_rate,
                         QString term_type, QString calc_type);

 private slots:
  void input_graph_parametrs();

 signals:
  void signal(char *polish, t_signes *stack, t_numbers *stk, char *new_data,
              double a, double b, double h);
  void cred(double sum, double overpay, double monthpay);
  void cred_dif(double *monthpay, double sum, double overpay, int size);

 private slots:
  void clear_C();
  void input_cr_parametrs();
  void on_push_button_clicked(char *polish, t_signes *stack, t_numbers *stk,
                              char *new_data, double a, double b, double h);
  void on_pushButton_calc_cr_clicked();
  void on_Creditcalculator_Changed();
  void on_pushButton_pm_clicked();
};
#endif  // MAINWINDOW_H
