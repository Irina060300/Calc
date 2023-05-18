#include "mainwindow.h"

#include "./ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_eq, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_minus, SIGNAL(clicked()), this,
          SLOT(digits_numbers()));
  connect(ui->pushButton_div, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_mult, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_left_bracket, SIGNAL(clicked()), this,
          SLOT(digits_numbers()));
  connect(ui->pushButton_right_bracket, SIGNAL(clicked()), this,
          SLOT(digits_numbers()));
  connect(ui->pushButton_dot, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_clear, SIGNAL(clicked()), this,
          SLOT(digits_numbers()));
  connect(ui->pushButton_clean, SIGNAL(clicked()), this,
          SLOT(digits_numbers()));
  connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_tg, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_atan, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_asin, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_acos, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_create_graph, SIGNAL(clicked()), this,
          SLOT(digits_numbers()));
  connect(ui->pushButton_x, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_ln, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_log, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_pow, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_mod, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->Creditcalculator, &QTabWidget::currentChanged, this,
          &MainWindow::on_Creditcalculator_Changed);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_push_button_clicked(char *polish, t_signes *stack,
                                        t_numbers *stk, char *new_data,
                                        double a, double b, double h) {
  if (ui->result_show->text().contains("x") == false) {
    create_result(polish, stack, stk, new_data, 0);
  }
  if (a < b && (b - a) >= h && fabs(h) > 1e-300 &&
      ui->result_show->text() != "ERROR") {
    gr = new Graph(this);
    gr->setModal(true);
    gr->show();
    connect(this, &MainWindow::signal, gr, &Graph::slot);
    emit signal(polish, stack, stk, new_data, a, b, h);
    switch (gr->exec()) {
      case QDialog::Rejected: {
        ui->lineEdit_start->clear();
        ui->lineEdit_end->clear();
        ui->lineEdit_step->clear();
        break;
      }
    }
  }
}

void MainWindow::digits_numbers() {
  QPushButton *button = (QPushButton *)sender();
  QString txt = button->text();
  QString all_numbers = "";
  input_graph_parametrs();
  ui->pushButton_create_graph->setStyleSheet(
      "QPushButton: {background-color: solid gray};"
      "QPushButton: {border-radius: 6px transparent};"
      "QPushButton: {border-bottom: 3px transparent};"
      "QPushButton {border-right: 2px transparent};"
      "QPushButton: {border-left: 2px transparent};"
      "QPushButton: active{ background-color: rgb(200,95,76); }"
      "QPushButton: hover{ background-color: rgb(232,95,76);} ");

  if (txt != "=" && txt != "graph") {
    if (ui->result_show->text() == "ERROR") ui->result_show->clear();
    if (txt == "AC") {
      ui->result_show->clear();
      all_numbers = "";
    } else if (txt == "C") {
      clear_C();
    } else {
      all_numbers = (ui->result_show->text() + txt);
      if (txt == "sin" || txt == "cos" || txt == "tan" || txt == "atan" ||
          txt == "acos" || txt == "asin" || txt == "ln" || txt == "log" ||
          txt == "sqrt") {
        all_numbers += "(";
      }
      ui->result_show->setText(all_numbers);
    }

    if (ui->result_show->text().contains("x") == true) {
      QLocale locale(QLocale::English);
      QDoubleValidator *validator =
          new QDoubleValidator(-INFINITY, INFINITY, 7);
      validator->setLocale(locale);
      ui->lineEdit_print_x->setValidator(validator);
      ui->lineEdit_print_x->setStyleSheet("border: 2px solid #F08080");
    } else {
      ui->lineEdit_print_x->setStyleSheet("border: 2px solid gray");
    }

  } else if (ui->result_show->text().isEmpty() == false) {
    QString input(ui->result_show->text());
    std::string str = input.toStdString();
    int flag_d = 0, flag_nd = 0, flag_pl = 0;
    char *data = (char *)calloc(sizeof(char), NMAX);
    char *new_data = (char *)calloc(sizeof(char), NMAX);
    char *polish = (char *)calloc(sizeof(char), NMAX * 2);
    if (data) {
      strcpy(data, str.c_str());
      flag_d = 1;
    }
    t_signes stack;
    t_numbers stk;
    init_signes(&stack);
    if (new_data && flag_d) {
      change_str(data, new_data);
      flag_nd = 1;
    }
    if (polish) flag_pl = 1;
    if (flag_d && flag_nd && flag_pl) {
      if (!check_data(new_data)) {
        if (txt == "=") {
          if (ui->result_show->text().contains("x")) {
            if (ui->lineEdit_print_x->text().isEmpty() == false) {
              create_result(polish, &stack, &stk, new_data,
                            ui->lineEdit_print_x->text().toDouble());
              ui->lineEdit_print_x->setStyleSheet("border: 2px solid gray");
            }
          } else if (ui->result_show->text().contains("x") == false) {
            create_result(polish, &stack, &stk, new_data, 0);
          }
        } else if (txt == "graph") {
          if (ui->lineEdit_start->text().isEmpty() == false &&
              ui->lineEdit_end->text().isEmpty() == false &&
              ui->lineEdit_step->text().isEmpty() == false) {
            double a = ui->lineEdit_start->text().toDouble();
            double b = ui->lineEdit_end->text().toDouble();
            double h = ui->lineEdit_step->text().toDouble();
            if (a < b && h < (b - a)) {
              on_push_button_clicked(polish, &stack, &stk, new_data, a, b, h);
            }
          } else if (ui->lineEdit_start->text().isEmpty() == true &&
                     ui->lineEdit_end->text().isEmpty() == true &&
                     ui->lineEdit_step->text().isEmpty() == true) {
            on_push_button_clicked(polish, &stack, &stk, new_data, -10, 10,
                                   0.01);
          }
        }
      } else {
        ui->result_show->setText("ERROR");
      }
    } else {
      if (!flag_d) free(data);
      if (!flag_nd) free(new_data);
      if (!flag_pl) free(polish);
    }
    ui->lineEdit_print_x->clear();
    ui->lineEdit_end->clear();
    ui->lineEdit_start->clear();
    ui->lineEdit_step->clear();
  }

  ui->result_show->setMaxLength(255);
}

void MainWindow::input_graph_parametrs() {
  QLocale locale(QLocale::English);
  QDoubleValidator *validator_1 =
      new QDoubleValidator(-1000000.0, 1000000.0, 7);
  QDoubleValidator *validator_2 = new QDoubleValidator(1e-7, 1000000.0, 7);
  validator_1->setLocale(locale);
  validator_2->setLocale(locale);
  ui->lineEdit_start->setValidator(validator_1);
  ui->lineEdit_end->setValidator(validator_1);
  ui->lineEdit_step->setValidator(validator_2);
}

void MainWindow::clear_C() {
  QString text = ui->result_show->text();
  if (text.endsWith("acos(") || text.endsWith("asin(") ||
      text.endsWith("atan(") || text.endsWith("sqrt(") ||
      text.endsWith(" mod ")) {
    text.chop(5);
  } else if (text.endsWith("cos(") || text.endsWith("sin(") ||
             text.endsWith("tan(") || text.endsWith("log(")) {
    text.chop(4);
  } else if (text.endsWith("ln(")) {
    text.chop(3);
  } else {
    text.chop(1);
  }
  ui->result_show->setText(text);
}

void MainWindow::create_result(char *polish, t_signes *stack, t_numbers *stk,
                               char *new_data, double x) {
  setlocale(LC_NUMERIC, "C");
  QString res_show;
  res_show =
      QString::number(add_result(polish, new_data, stack, stk, x), 'g', 7);
  if (res_show != "inf" && res_show != "-inf" && res_show != "nan" &&
      res_show != "-nan")
    ui->result_show->setText(res_show);
  else
    ui->result_show->setText("ERROR");
}

void MainWindow::on_Creditcalculator_Changed() { input_cr_parametrs(); }

void MainWindow::input_cr_parametrs() {
  QLocale locale(QLocale::English);
  ui->lineEdit_loan->setFocus();
  ui->lineEdit_input->setText("Enter the credit parametrs:");
  QRegExp r(
      "^[0-9]{1}(\\.\\d+)$|^[1-9]{1}[0-9]{1}(\\.\\d+)$|^[1-9]{1}[0-9]{1}[0-8]{"
      "1}(\\.\\d+)$|^[1-8]{1}[0-9]{1}[0-9]{1}(\\.\\d+)$|^999$");
  QRegExp regExp("^[1-9]{1}$|^[1-9]{1}[0-9]{1}$|[1-5]{1}[0-9]{2}$|^600");
  QRegExpValidator *term_val = new QRegExpValidator(regExp, this);
  ;
  ui->lineEdit_term->setValidator(term_val);
  QDoubleValidator *loan_val = new QDoubleValidator(0, INFINITY, 2);
  QRegExpValidator *rate_val = new QRegExpValidator(r, this);

  loan_val->setLocale(locale);

  ui->lineEdit_loan->setMaxLength(255);
  ui->lineEdit_loan->setValidator(loan_val);
  ui->lineEdit_int_rate->setValidator(rate_val);
}

void MainWindow::credit_calculator(double loan, double term, double int_rate,
                                   QString term_type, QString calc_type) {
  setlocale(LC_NUMERIC, "C");
  double sum = 0, over_pay = 0, month_pay = 0;
  if (term_type == "years") {
    term *= 12;
  }
  double P = int_rate / 100 / 12;
  if (calc_type == "annuity") {
    month_pay = loan * (P + P / (pow(1 + P, term) - 1));
    sum = month_pay * term;
    over_pay = sum - loan;
    cr = new Credit(this);
    cr->show();
    cr->setModal(true);
    connect(this, &MainWindow::cred, cr, &Credit::set_values);
    emit cred(sum, over_pay, month_pay);
  } else if (calc_type == "differiented") {
    double S_ost = loan;
    double month_pay_dif[(int)term] = {0}, b = loan / term, p = 0;
    for (int i = 0; i < (int)term; i++) {
      p = S_ost * P;
      month_pay_dif[i] = p + b;
      S_ost -= b;
      sum += month_pay_dif[i];
    }
    over_pay = sum - loan;
    cr_dif = new Credit_dif(this);
    cr_dif->setModal(true);
    cr_dif->show();

    connect(this, &MainWindow::cred_dif, cr_dif, &Credit_dif::set_values);
    emit cred_dif(month_pay_dif, sum, over_pay, (int)term);
  }
}

void MainWindow::on_pushButton_calc_cr_clicked() {
  QString loan_txt = ui->lineEdit_loan->text(),
          term_txt = ui->lineEdit_term->text(),
          int_rate_txt = ui->lineEdit_int_rate->text(),
          term_type = ui->comboBox_term->currentText(),
          calc_type = ui->comboBox_type->currentText();
  setlocale(LC_NUMERIC, "C");
  int flag = 0;
  double loan = loan_txt.toDouble(), term = term_txt.toDouble(),
         int_rate = int_rate_txt.toDouble();
  if (loan > 0)
    ui->label_loan_m->clear();
  else if (loan == 0) {
    flag = 1;
    ui->label_loan_m->setText("Enter the positive value");
  }
  if (term_type == "months") ui->label_term_m->clear();

  if (term_txt.isEmpty() == true) {
    ui->label_term_m->setText("Enter the value");
    flag = 1;
  }
  if (term_type == "years") {
    if (term > 50) {
      ui->label_term_m->setText("The value couldn't be greater then 50");
      flag = 1;
    } else if (term > 0) {
      ui->label_term_m->clear();
    }
  }
  if (int_rate_txt == "0" || int_rate_txt.isEmpty() == true) {
    ui->label_rate_m->setText("Enter the positive value");
    flag = 1;
  } else if (term > 0) {
    ui->label_rate_m->clear();
  }

  if (!flag) credit_calculator(loan, term, int_rate, term_type, calc_type);
}

void MainWindow::on_pushButton_pm_clicked() {
  QString res = ui->result_show->text();
  QString r;
  if (res == "ERROR") {
    ui->result_show->clear();
    ui->result_show->setText("-");
  } else if (!(res.startsWith("-(") && res.endsWith(")"))) {
    r = res.right(res.length() - 1);
    if (r.contains("+") || r.contains("-") || r.contains("*") ||
        r.contains("/") || r.contains("mod")) {
      ui->result_show->setText("-(" + res + ")");
    } else {
      if (res.startsWith("-"))
        ui->result_show->setText(r);
      else if (res.startsWith("+"))
        ui->result_show->setText("-" + r);
      else
        ui->result_show->setText("-" + res);
    }
  } else {
    r = res.right(res.length() - 2);
    r = r.left(r.length() - 1);
    int len = r.length(), count_left = 0, err = 0, count_right = 0;
    for (int i = 0; i < len; i++) {
      if (r[i] == "(") count_left++;
      if (r[i] == ")") count_right++;
      if (count_right > count_left) {
        err = 1;
        break;
      }
    }
    if (!err) {
      if (count_left == 0 && count_left == count_right) {
        ui->result_show->setText(r);
      } else if (count_left == count_right)
        ui->result_show->setText(r);
      else
        ui->result_show->setText("-(" + res + ")");
    } else {
      ui->result_show->setText("-(" + res + ")");
    }
  }
}
