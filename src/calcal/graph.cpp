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
  int N = (b - a) / h + 1;
  QVector<double> x(N), y(N);
  int i = 0;
  for (double X = a; X <= b; X = a + h * i) {
    double res = add_result(polish, new_data, stack, stk, X);
    x[i] = X;
    y[i] = res;
    i++;
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
  i = 0;
  while (isnan(y[i]) == true || isinf(y[i]) == true) i++;
  double minY = y[i], maxY = y[i];
  for (double k = i + 1; k < N; k++) {
    if (isnan(y[k]) == false && isinf(y[k]) == false) {
      if (y[k] <= minY) minY = y[k];
      if (y[k] >= maxY) maxY = y[k];
    }
  }
  double sr = maxY - (maxY - minY) / 2;
  if (strstr(polish, "t") != NULL) {
    minY = sr - 30;
    maxY = sr + 30;
  }
  ui->widget->yAxis->setRange(minY - 0.2, maxY + 0.2);
  ui->widget->replot();
  ui->widget->setInteraction(QCP::iRangeZoom, true);
  ui->widget->setInteraction(QCP::iRangeDrag, true);
}
