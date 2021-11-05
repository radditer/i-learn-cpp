#include <iostream>
#include <vector>

int length, lengthin = 0, z;
double temp;
std::vector<double> list;

void recall()
{
  for (int x = 0; x < length; x++)
  {
    std::cout.precision(12);
    std::cout << list[x] << " ";
  }
  std::cout << "\n";
}

int main()
{
  std::cout << "What is the length of the list to be sorted?\n";
  std::cin >> length;

  while (lengthin != length)
  {
    std::cout << "What is the number in position " << lengthin << "?\n";
    std::cin >> z;
    list.push_back(z);
    lengthin++;
  }
  recall();
}