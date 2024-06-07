//
// Created by stepan on 05.06.2024.
//

#include "hist.h"
using namespace QtCharts;

MainWindow::MainWindow(const std::vector <int32_t >& columns, const  std::vector <uint32_t >& values,QWidget *parent) : QMainWindow(parent) {

    if(columns.size()!=values.size()){
        throw std::runtime_error (" wrong sizes for columns and values ");
    }

   std::list<QBarSet*> bars;

   for(size_t colIdx = 0; colIdx<columns.size(); colIdx++){
       bars.push_back(new QBarSet(std::to_string(columns[colIdx]).c_str()));
       *bars.back() << values[colIdx];
   }



    QBarSeries *series = new QBarSeries();
    for(auto& bar: bars){
        series->append(bar);
    }

    QList<QBarSet *> sets = series->barSets();
    float currentHue = 0.0;
    for (int i = 0; i < sets.size(); ++i) {
        QColor col = QColor::fromHslF(currentHue, 0.7, 0.5);
        currentHue += 0.618033988749895f;
        currentHue = std::fmod(currentHue, 1.0f);
        sets[i]->setColor(col);
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle(
            "Some Title");
    chart->setAnimationOptions(QChart::SeriesAnimations);


    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, *std::max_element(values.begin(), values.end()));
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    setCentralWidget(chartView);
    resize(800, 400);
}
