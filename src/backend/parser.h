#ifndef MY_PARSER_H
#define MY_PARSER_H
#include <exception>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "data.h"

namespace my {
class Parser {
 public:
  Parser(Data *obj);
  ~Parser(){};
  void SetData(const char *path);
  Data GetData();
  void FillData();

 private:
  Data *obj_;
  const char *path_;
};
}  // namespace my

#endif