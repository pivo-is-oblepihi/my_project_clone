#include <gtest/gtest.h>
#include "qeneri_rand_num2/qeneri_rand_num2.h"
#include <QApplication>
#include "hist.h"



//для запуска гистограмы можно использовать этот тест. тут дан пример. как и примерный код гисограмы.

TEST(RUN, APP){
    int argc = 0;
    char** argv = nullptr;
    QApplication app(argc, argv);

    //значения, которые принимал случайный процесс
    std::vector <int32_t > columns = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    // количество раз, которые выпало то или иное число
    std::vector <uint32_t > values =  {35,40,55,60,70,80,70,60,50,35,30};

    MainWindow w(columns, values);
    w.show();
    app.exec();
}
TEST(qeneri_rand_num_test, CopyFromLegacy) {

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
