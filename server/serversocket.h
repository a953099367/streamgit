#ifndef SERVERSOCKET_H
#define SERVERSOCKET_H

#include <QObject>

class ServerSocket : public QObject
{
    Q_OBJECT
public:
    explicit ServerSocket(QObject *parent = nullptr);

signals:

public slots:
};

#endif // SERVERSOCKET_H