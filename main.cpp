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

  std::cout << "\n--------Task C----------" << std::endl;
  int *arr = new int[second];

  arr[0] = 12;
  arr[1] = 17;
  arr[2] = -5;
  arr[3] = 3;
  arr[4] = 7;
  arr[5] = -15;
  arr[6] = 27;
  arr[7] = 5;
  arr[8] = 13;
  arr[9] = -21;

  int sum1 = sumArray(arr, second);
  std::cout << "Sum of array with the elements {";

  for(int i = 0; i < second; i++){
    std::cout << arr[i] << " ";
  }

  std::cout << "} is:\n" << sum1 << std::endl;

  delete[] arr;

  return 0;
}
