#include <iostream>
#include <string>

#include "recursion.h"

std::string printRange(int left, int right){
  std::string printed = "";

  if(left < right){
    std::cout << left << " ";
    printed = printed + std::to_string(left) + " ";

    printed = printRange(left + 1, right);
  }else{
    return printed;
  }
}
