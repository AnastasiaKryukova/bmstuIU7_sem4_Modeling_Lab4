#include "evendistribution.h"
#include "cmath"

EvenDistribution::EvenDistribution(int aa, int bb): a{aa}, b{bb}{}

EvenDistribution::~EvenDistribution(){}

double EvenDistribution::generate()
{
//    srand(time(NULL));

    double rand_value;
    int precision {6};
    double min {0.00001};
    double max {0.99999};
    rand_value = rand() % (int)pow(10, precision); // получить случайное число как целое число с порядком precision
    rand_value = min + (rand_value / pow(10, precision)) * (max - min); // получить вещественное число

    return a + (b - a) * rand_value;
}
