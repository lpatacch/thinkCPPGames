#include <iostream>

int main() {

  // This is the break example
  char stop;
  
  while (true)
  {
    std::cout << "Do you want to stop yet? ";
    std::cin >> stop;
    if (stop == 'y')
        break;
    std::cout << "Oh, ok. \n";
  }
  std::cout << "Yay! The loop is done.\n";

  // This is the continue example
  int x = 0;
  while (x < 5) {
    x++;
    if (x == 3){      
      continue;
    }
    std::cout << x << " ";
  }
  
}
