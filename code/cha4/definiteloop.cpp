#include <iostream>

int main() {
  int val = 7;
  std::cout << "Here is a multiplication table for ";
  std::cout << val <<"\n";
  
  int x = 1;
  while (x <= 10)
  {
     std::cout << x << "\t" << x * val << "\n";
     x++;
  }
}