#ifndef ENTRYEXCEPTION_H
#define ENTRYEXCEPTION_H
#include <QObject>

class EntryException: public std::exception
{
public:
    EntryException(QString text);
    QString getMessage() const;
    ~EntryException();
private:
    QString text_exception;
};

#endif // ENTRYEXCEPTION_H
