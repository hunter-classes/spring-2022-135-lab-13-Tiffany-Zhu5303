#include <iostream>
#include <string>

#include "recursion.h"

std::string printRange(int left, int right){
  std::string printed = "";

  if(left <= right){
    return std::to_string(left) + " " + printRange(left + 1, right);
  }

  return "";
}
