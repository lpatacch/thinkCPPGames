#include <iostream>

/* 
 * This program shows how integer division works
 */
int main() {
  int hour, minute;
  int hitpoints = 49;
  hour = 11;
  minute = 59;
  
  std::cout << "Number of minutes since the midnight";
  std::cout<<" battle: " << hour*60 + minute << std::endl;

  // This is integer division, so the result will be zero
  std::cout << "Fraction of hitpoints left ";
  std::cout << hitpoints/50 << std::endl;
}