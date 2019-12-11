#include <iostream>

#include "Post.hpp"
using namespace std;

int Post::counter = 0;

Post::Post(std:: string t, std:: string c, std:: string d, std:: string te)
:id(++counter), title(t), creator(c), date(d), text(te) {
  cout << id << " " << t << " " << " " << c << " " << d << " " << te << "\n";
}

Post::~Post() {
  cout << "Post number " << id << " is about to be destroyed\n";
}

int Post::getId() {
  return id;
}
