#pragma once

class Epoll;
class Channel;
class EventLoop{
private:
    Epoll *p;
    bool quit;
public:
    EventLoop();
    ~EventLoop();
    void loop();
    void updateChannel(Channel*);
};