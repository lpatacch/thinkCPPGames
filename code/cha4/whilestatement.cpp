#include <iostream>

int main() {
  // The while countdown example
  int n = 3;
  while (n > 0) {
    std::cout << n << std::endl;
    n = n-1;
  }
  std::cout << "Blastoff!" << std::endl;

  std::cout << "hard to guess when this will end...\n";
  // showing a while loop that has n moving all around
  n=30;
  while (n != 1) {
      std::cout << n << std::endl;
      if (n%2 == 0) {           // n is even
        n = n / 2;
      } else {                  // n is odd
        n = n*3 + 1;
      }
    } 
}