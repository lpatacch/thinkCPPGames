#include <iostream>

int main() {

  // This shows the multiplication table with a do while 
  // instead
  int val = 7;
  std::cout << "Here is a multiplication table for ";
  std::cout << val <<"\n";
  
  int x = 1;
  do {
     std::cout << x << "\t" << x * val << "\n";
     x++;
  } while (x <= 10);
  std::cout << "\n";
  
  // This asks the user for a l or a r. If it is not
  // either, it keeps asking
  char direction = '\0';
  do {
     std::cout << "Do you want to go (l)eft or (r)ight?\n";
     std::cin >> direction;
     if ((direction != 'l')&&(direction != 'r'))
     {
        std::cout << "Please enter l or r\n";
     }
  } while ((direction != 'l')&&(direction != 'r'));
}