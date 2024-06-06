//
// Created by stepan on 05.06.2024.
//
#include <QtCharts>
#include <QMainWindow>
#ifndef TDDPROJECT_HIST_H
#define TDDPROJECT_HIST_H

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(const std::vector<int32_t>& columns, const std::vector<uint32_t >& values, QWidget *parent = nullptr);

    ~MainWindow() = default;

private:

};



#endif //TDDPROJECT_HIST_H
