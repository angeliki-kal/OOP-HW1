#ifndef THREAD_HPP
#define THREAD_HPP

#include <string>
#include <vector>
#include "Post.hpp"

class Thread {
    std::string subject, creator, date; //todo Date as clas
    std::vector<Post*> posts;
  public:
    Thread(std::string subject, std::string creator, std::string date);
    ~Thread();
    std::string getSubject();
};

#endif
