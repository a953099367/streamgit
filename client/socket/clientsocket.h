#ifndef CLIENTSOCKET_H
#define CLIENTSOCKET_H

#include <QObject>
#include <QTcpSocket>

class ClientSocket : public QObject
{
    Q_OBJECT
public:
    explicit ClientSocket(QObject *parent = nullptr);

    void connectToHost(const QString &ip, int port);
signals:

public slots:

private:
    QTcpSocket *socket;
};

#endif // CLIENTSOCKET_H
