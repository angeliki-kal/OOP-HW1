#ifndef FORUM_HPP
#define FORUM_HPP

#include <string>
#include <vector>

#include "Thread.hpp"


class Forum {
    std::string title;
    std::vector<Thread*> threads;
  public:
    Forum(std::string title);
    ~Forum();
    void addThread(Thread* t);
    void print();
};

#endif
