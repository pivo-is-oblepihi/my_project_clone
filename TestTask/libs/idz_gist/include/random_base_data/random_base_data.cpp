#include <iostream>
#include <QRandomGenerator>
using namespace std;

class rbd{
public:
    quint32 mas = QRandomGenerator::global()->generate();
};
