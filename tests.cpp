#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "recursion.h"

TEST_CASE("printing range"){
  CHECK(printRange(2, 5) == "2 3 4 5 ");
  CHECK(printRange(5, 2) == "");
  CHECK(printRange(1, 4) == "1 2 3 4 ");
  CHECK(printRange(-5, 0) == "-5 -4 -3 -2 -1 0 ");
}

TEST_CASE("summing range"){
  CHECK(sumRange(4, 18) == 165);
  CHECK(sumRange(-33, 53) == 870);
  CHECK(sumRange(0, 0) == 0);
}

TEST_CASE("summing elements of array"){
  int size = 5;
  int *arr = new int[size];

  arr[0] = 12;
  arr[1] = 17;
  arr[2] = -5;
  arr[3] = 3;
  arr[4] = 7;

  CHECK(sumArray(arr, size) == 34);
  delete[] arr;

  size = 4;
  arr = new int[size];

  arr[0] = -12;
  arr[1] = 13;
  arr[2] = 4;
  arr[3] = 18;

  CHECK(sumArray(arr, size) == 23);
}
