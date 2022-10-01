#include "argument.h"
#include <iostream>


Arguments::Arguments(){}

void Arguments::printArguments(int _c, std::string _v, int _it)
{
  c = _c;
  v = _v;
  it = _it;
  std::string textOut;
  std::string texts[8] = {"first   ", "second  ", "third   ", "fourth  ", "fifth   ", "sixth   ", "seventh ", "are you f..ing kidding mee?"};

  if (it > 7) {
    std::cout << "\n" << texts[7] << "\n";
    exit(0);
  }
  else{
    textOut = texts[it-1];
  }

  if (c <= 1){
    std::cout << "No Extra Command Line Argument ! \n";
  }
  else if (c > 1){
    std::cout << "The " << textOut << "argument is: " << v << "\n";
  }

}
