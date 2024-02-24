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
  if ((a < b) && (b - a) >= h && fabs(h) > 1e-300 &&
      ui->result_show->text() != "ERROR" && a >= -1000000 && b <= 1000000) {
    int flag = 0;
    if ((b - a) / h > 1000000) {
      flag = 1;
      QMessageBox msgBox;
      msgBox.setText("Please decrease step");
      msgBox.show();
      msgBox.exec();
    }
    if (!flag) {
      ui->lineEdit_start->setStyleSheet("border: 2px solid grey");
      ui->lineEdit_end->setStyleSheet("border: 2px solid grey");
      ui->lineEdit_step->setStyleSheet("border: 2px solid grey");
      gr = new Graph(this);
      gr->setModal(true);
      gr->show();
      connect(this, &MainWindow::signal, gr, &Graph::slot);
      emit signal(polish, stack, stk, new_data, a, b, h);
    }
  } else {
    ui->lineEdit_start->setStyleSheet("border: 2px solid #F08080");
    ui->lineEdit_end->setStyleSheet("border: 2px solid #F08080");
    ui->lineEdit_step->setStyleSheet("border: 2px solid #F08080");
    QMessageBox msgBox;
    msgBox.setWindowTitle("Warning!!!");
    msgBox.setText("Input correct parameters");
    msgBox.show();
    msgBox.exec();
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
      ui->lineEdit_print_x->setStyleSheet("border: 2px solid #8ccb5e");
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
          if (ui->lineEdit_start->text().isEmpty() == true &&
              ui->lineEdit_end->text().isEmpty() == true &&
              ui->lineEdit_step->text().isEmpty() == true) {
            on_push_button_clicked(polish, &stack, &stk, new_data, -10, 10,
                                   0.01);

          } else if (ui->lineEdit_start->text().isEmpty() == false ||
                     ui->lineEdit_end->text().isEmpty() == false ||
                     ui->lineEdit_step->text().isEmpty() == false) {
            double a = ui->lineEdit_start->text().toDouble();
            double b = ui->lineEdit_end->text().toDouble();
            double h = ui->lineEdit_step->text().toDouble();

            on_push_button_clicked(polish, &stack, &stk, new_data, a, b, h);
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

void MainWindow::on_Creditcalculator_Changed() {
  input_cr_parametrs();
  input_d_parametrs();
}

void MainWindow::input_cr_parametrs() {
  QLocale locale(QLocale::English);
  // ui->lineEdit_loan->setFocus();
  ui->lineEdit_input->setText("Enter the credit parametrs:");
  QRegularExpression r(
      "^[0-9]{1}(\\.\\d+)$|^[1-9]{1}[0-9]{1}(\\.\\d+)$|^[1-9]{1}[0-9]{1}[0-8]{"
      "1}(\\.\\d+)$|^[1-8]{1}[0-9]{1}[0-9]{1}(\\.\\d+)$|^999$");
  QRegularExpression regExp(
      "^[1-9]{1}$|^[1-9]{1}[0-9]{1}$|[1-5]{1}[0-9]{2}$|^600");
  QValidator *term_val = new QRegularExpressionValidator(regExp, this);
  ;
  ui->lineEdit_term->setValidator(term_val);
  QDoubleValidator *loan_val = new QDoubleValidator(0, INFINITY, 2);
  QValidator *rate_val = new QRegularExpressionValidator(r, this);

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
    double month_pay_dif[(int)term], b = loan / term, p = 0;
    memset(month_pay_dif, 0, (int)term * sizeof(double));
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
      if (r[i] == '(') count_left++;
      if (r[i] == ')') count_right++;
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

void MainWindow::input_d_parametrs() {
  QLocale locale(QLocale::English);
  QRegularExpression r(
      "^[0-9]{1}(\\.\\d+)$|^[1-9]{1}[0-9]{1}(\\.\\d+)$|^[1-9]{1}[0-9]{1}[0-8]{"
      "1}(\\.\\d+)$|^[1-8]{1}[0-9]{1}[0-9]{1}(\\.\\d+)$|^999$");
  QRegularExpression regExp(
      "^[1-9]{1}$|^[1-9]{1}[0-9]{1}$|[1-5]{1}[0-9]{2}$|^600");
  QValidator *term_val = new QRegularExpressionValidator(regExp, this);
  QDoubleValidator *loan_val = new QDoubleValidator(0, INFINITY, 2);
  QValidator *rate_val = new QRegularExpressionValidator(r, this);
  ui->d_term->setValidator(term_val);
  loan_val->setLocale(locale);

  ui->deposit_amnt->setMaxLength(255);
  ui->deposit_amnt->setValidator(loan_val);
  ui->d_rate->setValidator(rate_val);

  ui->d_add->setMaxLength(255);
  ui->d_add->setValidator(loan_val);

  ui->d_get->setMaxLength(255);
  ui->d_get->setValidator(loan_val);

  ui->d_nalog->setMaxLength(255);
  ui->d_nalog->setValidator(loan_val);
}

void MainWindow::on_d_calc_clicked() {
  QString dep_amnt_text = ui->deposit_amnt->text(),
          term_txt = ui->d_term->text(), int_rate_txt = ui->d_rate->text(),
          kap_type, add_text = ui->d_add->text(), get_text = ui->d_get->text(),
          nalog_text = ui->d_nalog->text();

  setlocale(LC_NUMERIC, "C");
  int flag = 0;
  if (add_text == "") {
    add_text = "0";
  }
  if (get_text == "") {
    get_text = "0";
  }
  if (nalog_text == "") {
    nalog_text = "0";
  }

  if (ui->rate_kap->isChecked()) {
    kap_type = "true";
    ui->label_10->clear();
    ui->label_10->setText("Периодичность капитализации");
  } else {
    kap_type = "false";
    ui->label_10->clear();
    ui->label_10->setText("Периодичность выплат");
  }

  double dep_amnt = dep_amnt_text.toDouble(), term = term_txt.toDouble(),
         replenishment = add_text.toDouble(), withdrawals = get_text.toDouble(),
         int_rate = int_rate_txt.toDouble(), nalog = nalog_text.toDouble();
  if (dep_amnt > 0)
    ui->d_amnt_label->clear();
  else if (dep_amnt == 0) {
    flag = 1;
    ui->d_amnt_label->setText("Введите положительное число");
  }
  if (term > 600 || term < 1) {
    ui->d_term_label->setText("Введите значение от 1 до 600");
    flag = 1;
  } else if (term > 0) {
    ui->d_term_label->clear();
  }
  if (term_txt.isEmpty() == true) {
    ui->d_term_label->setText("Введите срок вклада");
    flag = 1;
  }
  if (int_rate_txt == "0" || int_rate_txt.isEmpty() == true || int_rate > 100) {
    ui->d_rate_label->setText("Введите положительное значение до 100");
    flag = 1;
  } else if (term > 0) {
    ui->d_rate_label->clear();
  }
  if ((nalog < 0) || (nalog > 100)) {
    flag = 1;
    ui->d_nalog_label->setText("Введите положительное значение до 100");
  }
  if (!flag)
    deposit_calculator(dep_amnt, term, int_rate, replenishment, withdrawals,
                       kap_type, nalog);
}

void MainWindow::deposit_calculator(double start_sum, double term,
                                    double int_rate, double replenishment,
                                    double withdrawals, QString kap_type,
                                    double nalog) {
  QDate start_dttm = ui->dateEdit->date();
  double summ_dohod = 0, vnos_upd = 0, dohod_prev_nalog = 0, sum_nalog = 0,
         month_dohod = 0;
  nalog = 1000000 * nalog / 100;

  int count_months = term;
  QDate finish_dttm = start_dttm.addMonths(count_months);
  int add_dttm = ui->dateEdit_2->date().daysTo(finish_dttm),
      get_dttm = ui->dateEdit_3->date().daysTo(finish_dttm);
  QString pay_period = ui->pay_periodity->currentText();
  if (pay_period == "каждый день") {
    QDate everyDays = start_dttm, everyMonth = start_dttm.addDays(-1);
    vnos_upd = start_sum;
    for (int i = 0; i < start_dttm.daysTo(finish_dttm); i++) {
      double dopVnos = 0;
      double int_rateInMonth =
          int_rate / 12 / (everyMonth.daysTo(everyMonth.addMonths(1)));
      if (i == add_dttm) {
        dopVnos += replenishment;
      }
      if (i == get_dttm) {
        dopVnos -= withdrawals;
      }
      if (kap_type == "true") {
        vnos_upd += round(vnos_upd * int_rateInMonth) / 100;
      }
      summ_dohod += round(vnos_upd * int_rateInMonth) / 100;
      dohod_prev_nalog += round(vnos_upd * int_rateInMonth) / 100;
      vnos_upd += dopVnos;
      if (everyDays.day() == 31 && everyDays.month() == 12 &&
          dohod_prev_nalog > nalog) {
        summ_dohod = summ_dohod - (dohod_prev_nalog - nalog) * 0.13;
        vnos_upd -= (dohod_prev_nalog - nalog) * 0.13;
        sum_nalog += (dohod_prev_nalog - nalog) * 0.13;
        dohod_prev_nalog = 0;
      }
      if (everyDays.day() == everyMonth.day())
        everyMonth = everyMonth.addMonths(1);
      everyDays = everyDays.addDays(1);
    }
  }
  double dopVnos = 0;
  if (pay_period == "раз в месяц") {
    QDate everyDays = start_dttm, everyMonth = start_dttm.addDays(-1);
    vnos_upd = start_sum;
    for (int i = 0; i < start_dttm.daysTo(finish_dttm); i++) {
      double int_rateInMonth =
          int_rate / 12 / (everyMonth.daysTo(everyMonth.addMonths(1)));
      if (i == add_dttm) {
        dopVnos += replenishment;
      }
      if (i == get_dttm) {
        dopVnos -= withdrawals;
      }
      if (kap_type == "true") {
        if (everyDays.day() == everyMonth.day()) {
          vnos_upd += month_dohod;
          month_dohod = 0;
        }
        month_dohod += round(vnos_upd * int_rateInMonth) / 100;
      }
      summ_dohod += round(vnos_upd * int_rateInMonth) / 100;
      dohod_prev_nalog += round(vnos_upd * int_rateInMonth) / 100;
      vnos_upd += dopVnos;
      if (everyDays.day() == 31 && everyDays.month() == 12 &&
          dohod_prev_nalog > nalog) {
        summ_dohod = summ_dohod - (dohod_prev_nalog - nalog) * 0.13;
        vnos_upd -= (dohod_prev_nalog - nalog) * 0.13;
        sum_nalog += (dohod_prev_nalog - nalog) * 0.13;
        dohod_prev_nalog = 0;
      }
      everyDays = everyDays.addDays(1);
      if (everyDays.day() == everyMonth.day())
        everyMonth = everyMonth.addMonths(1);
    }
  }
  d_dep = new Deposit(this);
  d_dep->setModal(true);
  d_dep->show();
  connect(this, &MainWindow::dep, d_dep, &Deposit::set_values);
  if (kap_type == "true") {
    emit dep(summ_dohod, vnos_upd, sum_nalog);
  } else {
    emit dep(summ_dohod, vnos_upd + summ_dohod, sum_nalog);
  }
}
