#pragma once
#include <sys/epoll.h>
#include <vector>

class Channel;
class Epoll{
private:
    int epfd;
    struct epoll_struct *events;

public:
    Epoll();
    ~Epoll();

    void updateChannel(Channel*);

    std::vector<Channel*> poll(int timeout = -1);



};