#ifndef IHANDLER_H
#define IHANDLER_H

#include "socket/package.h"

//抽象类，解析策略
class IHandler
{
public:
    IHandler();
    virtual ~IHandler();

    virtual void handle(const Package &package)=0;
};

#endif // IHANDLER_H
