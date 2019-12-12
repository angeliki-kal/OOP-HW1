#ifndef POST_HPP
#define POST_HPP

#include <iostream>
#include <string>
#include <vector>

#include "Date.hpp"

class Post {
  static int counter;
  int id;
  std::string title, creator, text;
  Date date;
 public:
   Post(std::string title, std::string creator, std::string date, std::string text);
   ~Post();
   int getId();
   std::string getTitle();
   void print();
};

void readRandomTextFile(std::string path);
std::string getRandomText();

#endif
