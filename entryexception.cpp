#include "entryexception.h"

EntryException::EntryException(QString text): text_exception{text}{}

QString EntryException::getMessage()const
{
    return text_exception;
}

EntryException::~EntryException()
{

}
