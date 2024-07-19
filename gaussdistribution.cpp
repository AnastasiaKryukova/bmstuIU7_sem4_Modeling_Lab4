#include "gaussdistribution.h"
#include "cmath"
#include "QDebug"

GaussDistribution::GaussDistribution(double aaa, double bbb, double SSKO, double mmath_exp, QObject *parent) : aa{aaa}, bb{bbb}, SKO{SSKO}, math_exp{mmath_exp}, QObject(parent)
{

}
GaussDistribution::~GaussDistribution()
{

}

double GaussDistribution::generate()
{
//    QString a = ui->lineEdit->text();
//    QString b = ui->lineEdit_4->text();
//    double aa = a.toDouble();
//    double bb = b.toDouble();


    double pi = 3.14;
    double e = 2.718;
    QVector<double> x(1000), y(1000); //Массивы координат точек
        double rand_value;
        int precision {6};
        double min {0.00001};
        double max {0.99999};
        rand_value = rand() % (int)pow(10, precision); // получить случайное число как целое число с порядком precision
        rand_value = min + (rand_value / pow(10, precision)) * (max - min); // получить вещественное число

    int i=0;
    //Пробегаем по всем точкам
    for (double X = aa; X <= bb; X += 0.01)
    {
      x[i] = X;
      y[i] = (1/(SKO*pow((2*pi), 0.5))) * pow(e,-(pow((X - math_exp), 2)/(2*pow(SKO, 2))));;//Формула нашей функции
      i++;
    }
    int razmer = (y.size()/2)-rand_value;

    return y[razmer];

//    srand(time(NULL));

//    double rand_value;
//    int precision {6};
//    double min {0.00001};
//    double max {0.99999};
//    rand_value = rand() % (int)pow(10, precision); // получить случайное число как целое число с порядком precision
//    rand_value = min + (rand_value / pow(10, precision)) * (max - min); // получить вещественное число

//    double sum = 0.0;
//    for(int i = 1; i <= k; i++)
//    {
//        sum+=std::log(1-rand_value);
//    }
//    return 1.0/(lambda*k)*sum;
}
