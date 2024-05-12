#include <QRandomGenerator>
#include <QDebug>
#include <QVector>

class RandomNumberGenerator {
public:
    RandomNumberGenerator(int min, int max, int n) : min_(min), max_(max), n_(n) {}

    QVector<int> generateRandomNumbers() {
        QVector<int> randomNumbers;
        QRandomGenerator randomGenerator;

        for (int i = 0; i < n_; ++i) {
            int randomNumber = randomGenerator.bounded(min_, max_ + 1); // +1 для включения max
            randomNumbers.append(randomNumber);
        }

        return randomNumbers;
    }

private:
    int min_;
    int max_;
    int n_;
};

int main() {
    int min = 1;
    int max = 100;
    int n = 10;

    RandomNumberGenerator randomNumberGenerator(min, max, n);
    QVector<int> randomNumbers = randomNumberGenerator.generateRandomNumbers();

    qDebug() << "Сгенерированные числа:";
    for (int i = 0; i < randomNumbers.size(); ++i) {
        qDebug() << randomNumbers[i];
    }

    return 0;
}