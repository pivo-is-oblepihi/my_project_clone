#include <gtest/gtest.h>
#include "qeneri_rand_num/qeneri_rand_num.h"
using namespace std;
TEST(qeneri_rand_num_test, Creating){
//    RandomNumberGenerator ///
}
TEST(qeneri_rand_num_test, CopyFromLegacy){

    int min = 1;
    int max = 100;
    int n = 10;

    RandomNumberGenerator randomNumberGenerator(min, max, n);
    QVector<int> randomNumbers = randomNumberGenerator.generateRandomNumbers();



    qDebug() << "Сгенерированные числа:";
    for (int i = 0; i < randomNumbers.size(); ++i) {
        qDebug() << randomNumbers[i];
    }
}
