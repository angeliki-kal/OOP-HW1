#include "Thread.hpp"

using namespace std;

Thread::Thread(string s, string c, string d):subject(s), creator(c), date(d) {
  cout << "Thread with subject:" << subject << " has just been created\n\n";
}

Thread::~Thread() {
  for(auto p: posts) {
    delete p;
  }
  cout << "Thread with subject: " << subject << " is about to be destroyed\n\n";
}

std::string Thread::getSubject() {
  return subject;
}

void Thread::addPost(Post* post) {
  posts.push_back(post);
}
