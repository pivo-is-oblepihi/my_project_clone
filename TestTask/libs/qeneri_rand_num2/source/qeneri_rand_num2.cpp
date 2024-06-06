#include "qeneri_rand_num2/qeneri_rand_num2.h"

RandomNumberGenerator::RandomNumberGenerator(int min, int max, int n) : min_(min), max_(max), n_(n) {}

QVector<int> RandomNumberGenerator::generateRandomNumbers() {
    QVector<int> randomNumbers;
    QRandomGenerator randomGenerator;

    for (int i = 0; i < n_; ++i) {
        int randomNumber = randomGenerator.bounded(min_, max_ + 1); // +1 для включения max
        randomNumbers.append(randomNumber);
    }

    return randomNumbers;
}
