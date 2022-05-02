#include <iostream>

#include "recursion.h"

int main(){
  std::cout << "--------Task A----------" << std::endl;
  int first = 28;
  int second = 44;

  std::cout << "The range of " << first << " to " << second << " (inclusive):\n " << std::endl;
  std::cout << printRange(first, second) << std::endl;

  return 0;
}
