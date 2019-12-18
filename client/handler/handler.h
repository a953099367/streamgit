#ifndef HANDLER_H
#define HANDLER_H

#include <QObject>

#include "socket/package.h"

//包的解析
class Handler : public QObject
{
    Q_OBJECT
public:
    explicit Handler(QObject *parent = nullptr);

    void handle(QByteArray &buffer);
signals:

public slots:
};

#endif // HANDLER_H
