#include <catch2/catch_test_macros.hpp>

unsigned int factorial(unsigned int number) {
  return number > 1 ? factorial(number - 1) * number : 1;
}

TEST_CASE("Factorial Computed", "[factorial]") {
  REQUIRE(factorial(0) == 1);
  REQUIRE(factorial(1) == 1);
  REQUIRE(factorial(2) == 2);
  REQUIRE(factorial(3) == 6);
}
