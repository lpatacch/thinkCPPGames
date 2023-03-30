#include <iostream>
#include<cmath>

int main() {
  double log = std::log (17.0);
  double angle1 = 1.5;
  double height = std::sin (angle1);

  double mypi = /*M_PI;//*/std::numbers::pi;
  
  double pi = std::acos(-1.0);
  double degrees = 90;
  double angle2 = degrees * 2 * pi / 360.0;
  std::cout << angle2 << std::endl;
}
