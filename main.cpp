#include <iostream>
#include "argument.h"


int main(int argc, char const *argv[]) {

  Arguments pa;
  std::string empty = " ";

  if (argc == 1){
    pa.printArguments(argc,empty, 0);
  }
  else if (argc > 1){
    for (size_t i = 1; i < argc; i++) {
      const char *conv = argv[i];
      std::string u = conv;

      pa.printArguments(argc, u, i);
    }
  }

  return 0;
}
