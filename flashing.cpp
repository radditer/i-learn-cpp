#include <iostream>
#include <chrono>
#include <thread>

int main()
{
  for (int i = 0; i < 999; i++)
  {
    std::cout << "testing\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    system("clear");
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
  }
}