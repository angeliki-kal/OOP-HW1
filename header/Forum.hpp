#ifndef FORUM_HPP
#define FORUM_HPP

#include <string>
#include <map>

#include "Thread.hpp"


class Forum {
    std::string title;
    std::map<std::string, Thread*> threads;
    std::map<int, Thread*> post_cache;  //remember where post belongs
  public:
    Forum(const std::string &title);
    ~Forum();
    void addThread(Thread* t);
    Thread* getThread(const std::string &thread_subject);
    void print();
    Post* getPost(int id);
    void printPost(int id);
};

#endif
