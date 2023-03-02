#include <iostream>

int main() {

  int x = 1;
  int z = 3;
  int y = 2;
  int w = -2;

  // Demo of an if statement
  if (x > 0) {
    std::cout << "x is positive" << std::endl;
  }

  // Demo of an if/else statement
  if (x % 2 == 0) {
    std::cout << "x is even" << std::endl;
  } else {
    std::cout << "x is odd" << std::endl;
  }

  // Demo of a chained if/else
  if (x > 0) {
    std::cout << "x is positive" << std::endl;
  } else if (x < 0) {
    std::cout << "x is negative" << std::endl;
  } else {
    std::cout << "x is zero" << std::endl;
  }

  // Demo of nested if/else
  if (x == 0) {
    std::cout << "x is zero" << std::endl;
  } else {
    if (x > 0) {
      std::cout << "x is positive" << std::endl;
    } else {
      std::cout << "x is negative" << std::endl;
    }
  }

  // Demo of the && sign
  if ((x < y) && (x < z))
    std::cout << "x is the smallest" << std::endl;

  // Demo of the conditional operator in assignment
  y = (x < 0) ? -1 : 1;
  std::cout << "y is " << y << std::endl;

  std::cout << "w is ";
  // Demo of the conditional operator while outputting
  std::cout << ((w < 0) ? "negative" : "positive or zero");
  std::cout << std::endl;

  // another conditional operator example
  int thing = 2;
  std::cout << "There " << (thing == 1 ? "is " : "are ") << thing;
  std::cout << " toy" << (thing == 1 ? "" : "s") << ".";
}
