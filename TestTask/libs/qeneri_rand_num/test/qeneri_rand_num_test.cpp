#include <gtest/gtest.h>
#include "qeneri_rand_num/qeneri_rand_num.h"
using namespace std;

TEST(qeneri_rand_num_test, Creating){
//    RandomNumberGenerator ///
}
TEST(qeneri_rand_num_test, CopyFromLegacy) {

    int min, max, n;
    std::cin >> min >> max >> n;

    RandomNumberGenerator randomNumberGenerator(min, max, n);
    QVector<int> randomNumbers = randomNumberGenerator.generateRandomNumbers();


    qDebug() << "Сгенерированные числа:";
    for (int i = 0; i < randomNumbers.size(); ++i) {
        qDebug() << randomNumbers[i];
    }
}
