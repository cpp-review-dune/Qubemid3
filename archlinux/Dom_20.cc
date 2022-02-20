#include <iostream>
#include <cassert>  // for assert(...)
#include <vector>

int main(int argc, char **argv)
{
  int n = 100;
  std::vector<double> vec1(n, 0.0);     // construct with size n and default value 0.0

  for (const auto& arg : vec1)
  {
    std::cout << arg << std::endl;
  }

  return 0;
}