#include <iostream>

int main() {
  int hour, minute;  // these can hold whole numbers
  char colon;        // these can hold a letter or symbol

  hour = 11;
  minute = 59;
  colon = ':';

  //print out the values in the variables
  std::cout << "The battle will start at ";
  std::cout << hour;
  std::cout << colon;
  std::cout << minute;
  std::cout << std::endl;
  
}
