#include <gtest/gtest.h>
#include "qeneri_rand_num2/qeneri_rand_num2.h"
#include <QApplication>
#include "hist.h"


#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <limits>
#include <QVector>

using namespace std;

vector<int> UniqVec(const QVector<int>& input) {
    set<int> uniqueSet(input.begin(), input.end()); // Используем set для хранения уникальных значений
    return vector<int>(uniqueSet.begin(), uniqueSet.end()); // Возвращаем значения в виде вектора
}

//нужно переписать код, ибо тест 1 10 5 не работает
//vector<uint32_t> Chastota(const QVector<int>& input) {
//    if (input.empty()) {
//        return {};
//    }

//    // Найти минимальное и максимальное значения в векторе
//    int minValue = *min_element(input.begin(), input.end());
//    int maxValue = *max_element(input.begin(), input.end());

//    // Создать вектор частот размером (maxValue - minValue + 1)
//    vector<uint32_t> frequencies(maxValue - minValue + 1, 0);

//    // Подсчитать частоты чисел
//    for (int number : input) {
//        frequencies[number - minValue]++;
//    }

//    return frequencies;
//}

vector<uint32_t> Chastota(const QVector<int>& input) {

    vector <int> arr(input.size(), 0);

    for (int i = 0; i < input.size(); ++i)
    {
        arr[input[i]]++;
    }

    vector<uint32_t> frequencies;
    frequencies.reserve(arr.size()*input.size());

    for (int i = 0; i < arr.size(); ++i)
    {
        for (int j = 0; j < arr[i]; ++j)
        {
            frequencies.reserve(i);
            frequencies.push_back(i);
        }
    }

    return frequencies;
}


//для запуска гистограмы можно использовать этот тест. тут дан пример. как и примерный код гисограмы.

TEST(RUN, APP){
    int argc = 0;
    char** argv = nullptr;
    QApplication app(argc, argv);

    int min, max, n;
    cin >> min >> max >> n;

    RandomNumberGenerator randomNumberGenerator(min, max, n);
    //QVector<int> columns = randomNumberGenerator.generateRandomNumbers();
    //QVector<int> values = randomNumberGenerator.generateRandomNumbers();
    //значения, которые принимал случайный процесс
    QVector<int> numbersvec = randomNumberGenerator.generateRandomNumbers();

    std::vector <int32_t > columns = UniqVec(numbersvec);

    //columns = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    // количество раз, которые выпало то или иное число
    std::vector <uint32_t > values = Chastota(numbersvec);

    MainWindow w(columns, values);
    w.show();
    app.exec();
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
