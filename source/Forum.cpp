#include <iostream>

#include "Forum.hpp"
#include "Thread.hpp"

using namespace std;

Forum::Forum(std::string t):title(t) {
  cout << "Forum with title: " << title << " has just been created\n";
}

Forum::~Forum() {
  for(auto t: threads) {
    delete t;
  }
  cout << "Forum with title: " << title << " is about to be destroyed\n";
}

void Forum::addThread(Thread* t) {
  threads.push_back(t);
}

void Forum::print() {
  for(auto t: threads) {
    cout << t->getSubject() << endl;
  }
}
