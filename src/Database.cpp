#include "../include/Database.h"
#include "../include/Interface.h"
#include <fstream>

const std::string FAKE_DB = "fake_db.txt";
using namespace std;

bool is_file_exist(string filename)
{
  ifstream infile(filename);
  return infile.good();
}

int HashId(const string &id)
{
  int hashedId = hash<string>{}(id);

  return hashedId << 1;
}

vector<int> ReadFile()
{
  ifstream my_file(FAKE_DB);
  vector<int> content;
  
  if (!is_file_exist(FAKE_DB)) {
    cout << "There are no users. Please, register." << endl;
    CreateUser();
  }

  string line;
  while (getline(my_file, line)) {
    content.push_back(stoi(line));
  }

  my_file.close();
  
  return content;
}


