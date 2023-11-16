#include "../include/Interface.h"
#include "../include/Database.h"
#include <fstream>
#include <functional>

const std::string FAKE_DB = "fake_db.txt";
using namespace std;

void Interface()
{
  char action;

  cout << "\n~~~ Welcome. What do you want to do? ~~~\n" << endl;
  cout << "1. Login\n2. Create an account\n" << endl;

  do
  {
    cout << "Select an operation (1/2): "; cin >> action;
  } while (action < '1' || action > '2');

  switch (action)
  {
    case '1':
      LogUser();
      break;
    case '2':
      CreateUser();
      break;
  }
}

string GetId()
{
  string username = "";
  string password = "";

  cout << "\nPlease, provide a username: "; cin >> username;
  cout << "Please, provide a password: "; cin >> password;
  cout << endl;

  return username + " " + password;
}

void CreateUser()
{
  ofstream MyFile(FAKE_DB, ios_base::app);
  
  if (!MyFile.is_open()) {
    cout << "Error creating user." << endl;
    Interface();
  }
  
  string ids = GetId();
  int hashId = HashId(ids);

  MyFile << hashId << endl;

  MyFile.close();

  cout << "\nSuccessfully registered!" << endl;

  Interface();
}

void LogUser()
{
  vector<int> fake_dbContent = ReadFile();
  int userId = HashId(GetId());
  bool logged = false;

  for (int i = 0; i < fake_dbContent.size(); i++) {
    if (fake_dbContent[i] == userId) {
      logged = true;
      break;
    }    
  }

  if (logged)
    cout << "\n~~~ You logged successfully! ~~~\n";
  else {
    cout << "\nWrong credentials\n";
    Interface();
  }
}
