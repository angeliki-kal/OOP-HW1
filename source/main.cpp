#include <iostream>
#include "Forum.hpp"
#include "Thread.hpp"

using namespace std;

int main(int argc, char** argv) {
  readRandomTextFile("./rand_text.txt");
  Forum A("OOP");
  Thread* t = new Thread("Kanones kai Xrisimes Plirofories", "aggkal", "2019");
  A.addThread(t);
  A.print();
  t->addPost(new Post("agg", "uhius", "jsdaj", getRandomText()));
  t->addPost(new Post("kal", "uhius", "jsdaj", getRandomText()));
  return 0;
}
