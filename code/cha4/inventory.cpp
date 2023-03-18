#include <iostream>

int main() {

  // This allows the user to enter weights and it 
  // prints out the average
  
  int num = 0;
  int weight = 0;
  int total = 0;
  std::cout << "Enter the weight of the item.\n";
  std::cout << "When done, enter -1\n";
  std::cin >> weight;
  while (weight >= 0) {
    //if it is a valid weight, add it to the total
    total += weight;
    
    //add one to the number of items
    ++num;
    
    //ask for the next weight
    std::cout << "Enter the weight of the item.\n";
    std::cout << "When done, enter -1\n";
    std::cin >> weight;    
  }
  
  if (num != 0)
  {
    std::cout << "The average is " << total/num <<".\n"; 
  }
  else {
    std::cout << "No items to average.\n";
  }
  
}