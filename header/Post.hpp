#ifndef POST_HPP
#define POST_HPP

#include <iostream>
#include <string>
#include <vector>

class Post {
  static int counter;
  int id;
  std::string title, creator, date, text;
 public:
   Post(std::string title, std::string creator, std::string date, std::string text);
   ~Post();
   int getId();
};

void readRandomTextFile(std::string path);
std::string getRandomText();

#endif
