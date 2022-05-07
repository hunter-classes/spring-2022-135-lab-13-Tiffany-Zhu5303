#include <iostream>

#include "recursion.h"

int main(){
  std::cout << "--------Task A----------" << std::endl;
  int first = 28;
  int second = 44;

  std::cout << "The range of " << first << " to " << second << " (inclusive):\n " << std::endl;
  std::cout << printRange(first, second) << std::endl;

  std::cout << "\n--------Task B----------" << std::endl;
  first = 1;
  second = 3;

  std::cout << "The sum of the numbers in the range of " << first << " and " << second << " is: " << std::endl;
  std::cout << sumRange(first, second) << std::endl;

  first = -2;
  second = 10;

  std::cout << "\nThe sum of the numbers in the range of " << first << " and " << second << " is: " << std::endl;
  std::cout << sumRange(first, second) << std::endl;

  return 0;
}
