#include "graph.h"

#include "ui_graph.h"

Graph::Graph(QWidget *parent) : QDialog(parent), ui(new Ui::Graph) {
  ui->setupUi(this);
}

Graph::~Graph() { delete ui; }

void Graph::slot(char *polish, t_signes *stack, t_numbers *stk, char *new_data,
                 double a, double b, double h) {
  create_graph(polish, stack, stk, new_data, a, b, h);
}

void Graph::create_graph(char *polish, t_signes *stack, t_numbers *stk,
                         char *new_data, double a, double b, double h) {
  int N = (b - a) / h + 2;
  QVector<double> x(N), y(N);
  double X = a;

  for (int i = 0; i < N; i++) {
    double res =
        add_result(polish, new_data, stack, stk, X);  // Формула нашей функции
    x[i] = X;
    y[i] = res;
    X += h;
  }
  ui->widget->clearGraphs();

  ui->widget->addGraph();

  ui->widget->graph(0)->addData(x, y);
  ui->widget->graph(0)->setLineStyle(QCPGraph::lsNone);

  ui->widget->graph(0)->setScatterStyle(
      QCPScatterStyle(QCPScatterStyle::ssCircle, 2));

  ui->widget->xAxis->setLabel("x");
  ui->widget->yAxis->setLabel("y");

  ui->widget->xAxis->setRange(a, b);

  double maxY = -100000000000, minY = 100000000000;
  int count_maxes = 0, count_mins = 0;
  for (int i = 1; i < N; i++) {
    if (qIsNaN(y[i]) == false && qIsInf(y[i]) == false) {
      if (y[i] <= minY) {
        minY = y[i];
          count_mins++;
      }
      if (y[i] >= maxY) {
        maxY = y[i];
          count_mins++;
      }
    }
  }
  if ((maxY - minY) > 10000 && count_maxes > 1 && count_mins > 1) {
      double sr = maxY - (maxY - minY) / 2;
      minY = sr - 10000;
      maxY = sr + 10000;
    }
  if (strstr(polish, "t") != NULL) {
    minY = -10;
    maxY = 10;
  }
  ui->widget->yAxis->setRange(minY - 0.2, maxY + 0.2);
  ui->widget->replot();
  ui->widget->setInteraction(QCP::iRangeZoom, true);
  ui->widget->setInteraction(QCP::iRangeDrag, true);
}
