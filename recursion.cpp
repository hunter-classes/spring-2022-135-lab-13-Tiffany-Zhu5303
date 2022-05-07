#include <iostream>
#include <string>

#include "recursion.h"

std::string printRange(int left, int right){
  if(left <= right){
    return std::to_string(left) + " " + printRange(left + 1, right);
  }

  return "";
}

int sumRange(int left, int right){
  int sum = 0;

  if(right < left){
    return sum;
  }else{
    return sum + left + sumRange(left +  1, right);
  }
}
