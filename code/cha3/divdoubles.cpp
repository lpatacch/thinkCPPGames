#include <iostream>

int main() {
  //example of integer division with a double
  double y = 1 / 3;
  std::cout << "This is integer division "<< y << std::endl;

  y = 1.0 / 3.0;
  std::cout << "This is float division "<< y  << std::endl;

  y = static_cast<double>(1)/ 3;
  std::cout << "This is also float division "<< y  << std::endl;  

  double pi = 3.14159;
  int x = static_cast<int>(pi);

  std::cout << "This shows how casting works " << x << std::endl;
  
}
