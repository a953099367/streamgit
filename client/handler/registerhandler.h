#ifndef REGISTERHANDLER_H
#define REGISTERHANDLER_H

#include "ihandler.h"

class RegisterHandler : public IHandler
{
public:
    RegisterHandler();

    // IHandler interface
public:
    void handle(const Package &package);
};

#endif // REGISTERHANDLER_H
