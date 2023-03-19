#include <iostream>

#include "code.hpp"

int main(int argc, char** argv) {

  for (int i = 1; i < argc; ++i) {
    std::cout << " rewers liczby: " << argv[i] << " to: " << code(argv[i]) << std::endl;
  }
  return 0;
}