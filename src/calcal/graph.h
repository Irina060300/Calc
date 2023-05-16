#ifndef GRAPH_H
#define GRAPH_H

#include <QDialog>
extern "C" {
#include "./../header.h"
}
#include <QPushButton>

#include "qcustomplot.h"
namespace Ui {
class Graph;
}

class Graph : public QDialog {
  Q_OBJECT

 public:
  explicit Graph(QWidget *parent = nullptr);
  ~Graph();

 private:
  Ui::Graph *ui;

 public slots:
  void slot(char *polish, t_signes *stack, t_numbers *stk, char *new_data,
            double a, double b, double h);

 private slots:
  void create_graph(char *polish, t_signes *stack, t_numbers *stk,
                    char *new_data, double a, double b, double h);
};

#endif  // GRAPH_H
