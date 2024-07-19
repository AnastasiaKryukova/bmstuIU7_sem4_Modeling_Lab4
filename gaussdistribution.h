#ifndef GAUSSDISTRIBUTION_H
#define GAUSSDISTRIBUTION_H
#include <QObject>

class GaussDistribution : public QObject
{
    Q_OBJECT
public:
    explicit GaussDistribution(double aaa, double bbb, double SSKO, double mmath_exp, QObject *parent = nullptr);
    ~GaussDistribution();
    double generate();
private:
    double aa;
    double bb;
    double SKO;
    double math_exp;

signals:

};
#endif // GAUSSDISTRIBUTION_H
