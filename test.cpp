#include <iostream>

int a, b, y;
long f(int i, int x)
{
  if (i == 0)
  {
    return x + 1;
  }
  else
  {
    y = x;
    while (x >= 0)
    {
      y = f(i - 1, y);
      x--;
    }
    return y;
  }
}

int main()
{
  std::cin >> a;
  std::cin >> b;
  std::cout << f(a, b) << "\n";
}