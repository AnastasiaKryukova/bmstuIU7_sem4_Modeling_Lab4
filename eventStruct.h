#ifndef EVENTSTRUCT_H
#define EVENTSTRUCT_H
#include <QObject>

struct eventStruct
{
    double data;
    QString type;
    eventStruct(double d, QString t): data{d}, type{t}{}
};
#endif // EVENTSTRUCT_H
