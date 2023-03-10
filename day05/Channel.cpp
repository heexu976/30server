#include "Channel.h"
#include "Epoll.h"

Channel::Channel(Epoll* _ep, int _fd) : ep(_ep), fd(_fd), events(0), revents(0), inEpoll(false){}

Channel::~Channel(){}

void Channel::enableReading(){
    events = EPOLLIN | EPOLLET;
    ep->updateChannel(this);
}