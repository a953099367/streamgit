#include "clientsocket.h"

ClientSocket::ClientSocket(QObject *parent)
    : QObject(parent), socket(nullptr)
{

}

void ClientSocket::connectToHost(const QString &ip, int port)
{
    if(socket != nullptr) return;

    socket = new QTcpSocket(this);
    socket->connectToHost(ip, port);

    QObject::connect(socket, &QTcpSocket::readyRead, [=](){

    });
}
