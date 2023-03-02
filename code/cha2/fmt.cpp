#include <iostream>
#include <format>

int main()
{
  int hour, minute;
  char colon;

  hour = 11;
  minute = 59;
  colon = ':';

  //format, example 1
  std::cout << std::format(
    "The battle will start at {}{}{}.\n", hour, colon, minute);

  //format, example 2
  std::cout << std::format(
    "The battle will start at {0}{2}{1}.\n",
     hour, minute, colon);
}