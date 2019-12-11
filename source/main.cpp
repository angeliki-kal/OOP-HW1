#include <iostream>
#include "Forum.hpp"
#include "Thread.hpp"

using namespace std;

int main(int argc, char** argv) {
  Forum A("OOP");
  Thread* t = new Thread("Kanones kai Xrisimes Plirofories", "aggkal", "2019");
  A.addThread(t);
  A.print();
  return 0;
}
