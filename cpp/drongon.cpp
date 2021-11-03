#include <iostream>
#include <unistd.h>

int main()
{
  int x = 0;
  while (x <= 100)
  {
    std::cout << "drongon is bald\n";
    sleep(5);
    x++;
  }
}