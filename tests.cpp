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
  delete[] arr;
  arr = nullptr;
}

TEST_CASE("alphanumerics only"){
  std::string alpha = "lalalalala";
  std::string space = "lalala lalala";
  std::string symbol = "wow!";
  std::string cases = "BoopDoop";

  CHECK(isAlphanumeric(alpha) == 1);
  CHECK(isAlphanumeric(space) == 0);
  CHECK(isAlphanumeric(symbol) == 0);
  CHECK(isAlphanumeric(cases) == 1);
}

TEST_CASE("nested parenthesis"){
  std::string letters = "abc";
  std::string letters_paren = "a(b)c";
  std::string numbers = "123";
  std::string parenx5 = "((((()))))";
  std::string unnested = "()()()";

  CHECK(nestedParens(letters) == 0);
  CHECK(nestedParens(letters_paren) == 0);
  CHECK(nestedParens(numbers) == 0);
  CHECK(nestedParens(parenx5) == 1);
  CHECK(nestedParens(unnested) == 0);
}
