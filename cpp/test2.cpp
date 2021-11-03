#include <iostream>

long x, y;
long f(long x, long y)
{
  y = x;
  while (y >= 0)
  {
    x = x * x;
    y--;
  }
  return x;
}

int main()
{
  std::cout << f(2, 30) << "\n";
}