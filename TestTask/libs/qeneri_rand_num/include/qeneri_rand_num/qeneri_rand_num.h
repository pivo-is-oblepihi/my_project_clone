#ifndef QENERI_RAND_NUM_H
#define QENERI_RAND_NUM_H

#include <QRandomGenerator>
#include <QDebug>
#include <QVector>

class RandomNumberGenerator {
public:
    RandomNumberGenerator(int min, int max, int n);

    QVector<int> generateRandomNumbers();

private:
    int min_;
    int max_;
    int n_;
};

#endif
