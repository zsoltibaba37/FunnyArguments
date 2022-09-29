#include <string>

#pragma once
#ifndef ARGUMENT_H
#define ARGUMENT_H

class Arguments
{
public:
  Arguments();
  void printArguments(int _c, std::string _v, int _it);

private:
  int c;
  std::string v;
  int it;


};

#endif
