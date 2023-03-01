#pragma once
#include <functional>


class EventLoop;
class Channel;
class Socket;
class Acceptor{
private:
    EventLoop *loop;
    Socket *sock;
    Channel * acceptChannel;
    std::function<void(Socket*)> newConnectionCallback;
public:
    Acceptor(EventLoop* _loop);
    ~Acceptor();
    void acceptConnection();
    void setNewConnectionCallack(std::function<void(Socket*)>);
};