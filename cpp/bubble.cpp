#include <iostream>
#include <vector>

int length;
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
  int lengthin = 0, n, o;
  double z, temp;
  //z is input number into the vector
  std::cout << "What is the length of the list to be sorted?\n";
  std::cin >> length;

  while (lengthin != length)
  {
    std::cout << "What is the number in position " << lengthin << "?\n";
    std::cin >> z;
    list.push_back(z);
    lengthin++;
  }

  for (int n = 0; n < length; n++)
  {
    for (int o = n + 1; o < length; o++)
    {
      if (list[o] < list[n])
      {
        temp = list[n];
        list[n] = list[o];
        list[o] = temp;
      }
      recall();
    }
  }
  std::cout << "The sorted list is:\n";
  recall();
}