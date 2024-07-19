#ifndef EVENDISTRIBUTION_H
#define EVENDISTRIBUTION_H
#include <QObject>

class EvenDistribution
{

public:
    EvenDistribution(int aa, int bb);
    double generate();
    ~EvenDistribution();
private:
    int a;
    int b;
};
#endif // EVENDISTRIBUTION_H
