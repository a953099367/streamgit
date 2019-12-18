#include "handler.h"
#include "loginhandler.h"
#include "registerhandler.h"
#include "chathandler.h"

Handler::Handler(QObject *parent)
    : QObject(parent)
{

}

void Handler::handle(QByteArray &buffer)
{
    Package package;
    int len = 0;
    while((len = package.unpack(buffer)) > 0){
        buffer = buffer.mid(len);

        IHandler *handler = nullptr;

        switch(package.getType()){
        case Package::none:
            break;
        case Package::registerType:
            handler = new RegisterHandler;
            break;
        case Package::loginType:
            handler = new LoginHandler;
            break;
        case Package::chatType:
            handler = new ChatHandler;
            break;
        }

        if(handler){
            handler->handle(package);
            delete handler;
        }
    }
}
