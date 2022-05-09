#include <iostream>
#include <string>
#include <ctype.h>
#include <stdio.h>

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

int sumArray(int *arr, int size){
  int sum = 0;
  if(size > 0){
    return sum + *arr + sumArray(arr + 1, size - 1);
  }else{
    return sum;
  }
}

bool isAlphanumeric(std::string s){
  if(s.length() > 1){
    
    if(std::isalnum(s[0])){
      return isAlphanumeric(s.substr(1, s.length() - 1));
    }else{
      return false;
    }
    
  }else if(s.length() == 1){
    
    if(std::isalnum(s[0])){
      return true;
    }else{
      return false;
    }
    
  }else{
    
    return false;
    
  }
}

bool nestedParens(std::string s){
  if(s == ""){
    return true;
  }else if(s[0] == '(' && s[s.length() - 1] == ')'){
    return nestedParens(s.substr(1, s.length() - 2));
  }else{
    return false;
  }
}
    
