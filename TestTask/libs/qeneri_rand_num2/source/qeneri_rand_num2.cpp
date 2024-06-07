#include "qeneri_rand_num2/qeneri_rand_num2.h"

QVector<int> RandomNumberGenerator::generateRandomNumbers() {

    QVector<int> randomNumbers; //randomNumbers - name vector

    QRandomGenerator randomGenerator; //creat exemple class QRandomGenerator

    for (int i = 0; i < n_; ++i) {

        int rN = randomGenerator.bounded(min_, max_ + 1); // +1 для включения max

        randomNumbers.append(rN);
    }

    return randomNumbers;
}
//кароче здесь прописана реализация метода generateRandomNumbers, который возвращает тип - QVector<int>,
//а сам метод находится в классе RandomNumberGenerator
//1) создаётся массив randomNumbers
//2) создаётся объект randomGenerator класса QRandomGenerator
//3) Генерирует случайное число randomNumber в диапазоне от min_ до max_ включительно,
//используя метод bounded генератора случайных чисел.
//Метод bounded генерирует случайное число в диапазоне [min_, max_),
//поэтому добавляется 1 к max_, чтобы включить его в диапазон.
//4) Добавляет сгенерированное число в вектор randomNumbers
//5) Выводит этот вектор
