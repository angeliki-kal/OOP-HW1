#include "Thread.hpp"

using namespace std;

Thread::Thread(string s, string c, string d):subject(s), creator(c), date(d) {
  cout << "Thread with subject:" << subject << " has just been created\n";
}

Thread::~Thread() {
  cout << "Thread with subject: " << subject << " is about to be destroyed\n";
}

std::string Thread::getSubject() {
  return subject;
}
