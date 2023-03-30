#include <iostream>

// This shows function prototypes
void functionA(char letter);
void functionB(char letter);

// There is no way to have the
// function that calls another
// to be underneath.
void functionA(char letter)
{
  if (letter == 'A')
  {
    std::cout << "A";    
  }
  else {
    if (letter == 'B') {          
      functionB(letter);
    }
  }
}

void functionB(char letter)
{
  if (letter == 'B')
  {
    std::cout << "B";
  }
  else {
    if (letter == 'A') {
      functionA(letter);
    }
  }
} 

int main() {
  functionA('B');
  functionB('A');
}
