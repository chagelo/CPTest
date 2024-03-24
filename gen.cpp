#include <iostream>

#include "testlib.h"


int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  int n = rnd.next(1, 100);
  std::cout << n << std::endl;
  for (int i = 1; i <= n; ++i) {
    std::cout << rnd.next(1, n) << " ";
  }
  std::cout << std::endl;
}