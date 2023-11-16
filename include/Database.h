#include <cstring>
#include <iostream>
#include <vector>

#ifndef DATABASE_H
#define DATABASE_H

bool is_file_exist(std::string filename);
std::vector<int> ReadFile();
int HashId(const std::string &id);

#endif
