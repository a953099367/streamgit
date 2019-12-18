#include "package.h"

#include <QJsonDocument>

Package::Package(Type type)
    :type(type)
{

}

QByteArray Package::pack()
{
    //打包
    QByteArray head(8, 0);
    QByteArray body = QJsonDocument(json).toJson();

    int len = body.size();
    memcpy(head.data(), &len, sizeof(int));
    memcpy(head.data() + sizeof(int), &type, sizeof(Type));

    return head + body;
}

int Package::unpack(QByteArray &buffer)
{
    if(buffer.size() < (int)(sizeof(int) + sizeof(Type))) return 0;

    int len = *(int *)(buffer.data());

    if(buffer.size() < (int)(sizeof(int) + sizeof(Type) + len)) return 0;

    QJsonObject obj = QJsonDocument::fromJson(buffer.mid(sizeof(int) + sizeof(Type), len)).object();
    if(obj.isEmpty()) return 0;

    this->type = *(Type *)(buffer.data() + sizeof(int));
    this->json = obj;

    return sizeof(int) + sizeof(Type) + len;
}
