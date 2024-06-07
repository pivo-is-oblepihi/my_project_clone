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

    QVector<int> generateRandomNumbers();

};

#endif
