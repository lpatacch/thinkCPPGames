#include <iostream>

int main() {

  int z = 0;
  int x = 1;
  int y = 3;
  char symbol = '*';
  char direction = 'r';
  int dayOfChristmas = 3;

  // Demo of a switch
  switch (symbol) {
  case '+':
    z = x + y;
    break;
  case '*':
    z = x * y;
    break;
  default:
    std::cout << "I only know how to perform addition";
    std::cout << " and multiplication" << std::endl;
    break;
  }
  std::cout << "z is " << z << std::endl;

  // A demo of stacked cases
  switch (direction) {
    case 'L':
    case 'l':
        std::cout << "Going left" << std::endl;
        break;
    case 'R':
    case 'r':
        std::cout << "Going Right" << std::endl;
        break;    
    default:
        std::cout << "Please choose R or L" << std::endl;
  }  

  // Demo of fallthrough in switches
  std::cout << std::endl;
  std::cout << "On the " << dayOfChristmas;
  std::cout << " day of Christmas";
  std::cout << " my true love gave to me" << std::endl;
  switch (dayOfChristmas) {
    case 3:
        std::cout << " 3 french hens,"<< std::endl;
        [[fallthrough]];
    case 2:
        std::cout << " 2 calling birds, and"<< std::endl;
        [[fallthrough]];
    case 1:
        std::cout << " a partridge in a pear tree";
        std::cout << std::endl;
    }

}
