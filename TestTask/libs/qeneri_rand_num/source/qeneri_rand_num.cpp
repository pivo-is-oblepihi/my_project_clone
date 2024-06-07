#include "qeneri_rand_num/qeneri_rand_num.h"

QVector<int> RandomNumberGenerator::generateRandomNumbers() {

    QVector<int> randomNumbers;

    QRandomGenerator randomGenerator;

    for (int i = 0; i < n_; ++i) {

        int randomNumber = randomGenerator.bounded(min_, max_ + 1); // +1 для включения max

        randomNumbers.append(randomNumber);
    }

    return randomNumbers;
}
