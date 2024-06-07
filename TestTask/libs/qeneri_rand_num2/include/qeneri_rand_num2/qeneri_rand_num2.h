#ifndef QENERI_RAND_NUM2_H
#define QENERI_RAND_NUM2_H

#include <QRandomGenerator>
#include <QDebug>
#include <QVector>

class RandomNumberGenerator {

    int min_;
    int max_;
    int n_;

public:
    RandomNumberGenerator(int r_min = 1, int r_max = 100, int r_n = 10)
    {
        min_ = r_min;
        max_ = r_max;
        n_ = r_n;
    }
    // синтаксис методов класса <Тип возвращаемого значения> <ИмяМетода> (<НаборПараметров>) {<Реализация>};
    QVector<int> generateRandomNumbers(); //публичный метод реализация которого представлена в файле qeneri_rand_num2.cpp

};

#endif
