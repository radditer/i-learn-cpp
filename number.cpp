#include <iostream>

double a, b, c;
double test(double a, double b, double c)
{
  while (c >= 0)
  {
    a = a * b;
    c--;
  }
  return a;
}

int main()
{
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;
  std::cout.precision(300);
  std::cout << test(a, b, c) << "\n";
}