#ifndef LOGINHANDLER_H
#define LOGINHANDLER_H

#include "ihandler.h"

class LoginHandler : public IHandler
{
public:
    LoginHandler();

    // IHandler interface
public:
    void handle(const Package &package);
};

#endif // LOGINHANDLER_H
