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
