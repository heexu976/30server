#pragma once
#include <functional>

class EventLoop;
class Socket;
class Channel;
class Connection{
private:
    EventLoop* loop;
    Socket* socket;
    Channel* channel;
    std::function<void(Socket*)> deleteConnectionCallback;
public:
    Connection(EventLoop *_loop, Socket *_sock);
    ~Connection();

    void echo(int socket_fd);

    void setDeleteConnectionCallback(std::function<void(Socket*)>);




};