#include <iostream>

double a, b, c;
std::string f(double a, double b, double c)
{
  if (a == 0)
  {
    return std::to_string(b + c);
  }
  else if (a == 1)
  {
    return std::to_string(b - c);
  }
  else if (a == 2)
  {
    return std::to_string(b * c);
  }
  else if (a == 3)
  {
    return std::to_string(b / c);
  }
  else
  {
    return "bruh";
  }
}

int main()
{
  std::cout << "Which function? 0 [+], 1 [-], 2 [*] or 3 [÷]\n";
  std::cin >> a;
  if (a > 3 || a < 0)
  {
    std::cout << "bruh\n";
    exit(0);
  }
  std::cout << "First number?\n";
  std::cin >> b;
  std::cout << "Second number?\n";
  std::cin >> c;
  std::cout << "The function of the two is: " << f(a, b, c) << "\n";
}