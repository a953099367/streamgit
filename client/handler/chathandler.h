#ifndef CHATHANDLER_H
#define CHATHANDLER_H

#include "ihandler.h"

class ChatHandler : public IHandler
{
public:
    ChatHandler();

    // IHandler interface
public:
    void handle(const Package &package);
};

#endif // CHATHANDLER_H
