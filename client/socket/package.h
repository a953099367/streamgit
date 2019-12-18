#ifndef PACKAGE_H
#define PACKAGE_H

#include <QJsonObject>

class Package
{
public:
    //表示层
    enum Type{
        none = 0,
        registerType,
        loginType,
        chatType
    };

    Package(Type type = none);

    //打包
    QByteArray pack();
    //拆包
    int unpack(QByteArray &buffer);

    inline Type getType()const{return this->type;}
    inline void setType(Type type){this->type = type;}

    QJsonValue operator [](const QString &key)const{return this->json[key];}
    QJsonValueRef operator [](const QString &key){return this->json[key];}
private:
    Type type;
    QJsonObject json;
};

#endif // PACKAGE_H
