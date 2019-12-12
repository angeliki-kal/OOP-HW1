#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

#include "Post.hpp"
using namespace std;

int Post::counter = 0;
vector<string> g_rand_text_lines;

Post::Post(std:: string t, std:: string c, std:: string d, std:: string te)
:id(++counter), title(t), creator(c), date(d), text(te) {
  cout << id << " " << t << " " << c << " " << d << "\ntext: \"" << te << "\"\n\n";
}

Post::~Post() {
  cout << "Post number " << id << " is about to be destroyed\n\n";
}

int Post::getId() {
  return id;
}

//load random text file to memory, in a vector<string>
void readRandomTextFile(std::string path) {
  ifstream infile(path);
  if(!infile) {
    cerr << "Couldn't open file " << path << endl;
    exit(-1);
  }
  //read and save line by line
  string str;
  while(getline(infile, str)) {
    if(str.size() > 0) {
      g_rand_text_lines.push_back(str);
    }
  }
  infile.close();
  if(g_rand_text_lines.size() == 0) {
    cerr << "No lines read from rand text file\n";
    exit(-1);
  }
  //init random seed
  srand(time(0));
}

//get a random line for post text
std::string getRandomText() {
  return g_rand_text_lines[rand() % g_rand_text_lines.size()];
}
