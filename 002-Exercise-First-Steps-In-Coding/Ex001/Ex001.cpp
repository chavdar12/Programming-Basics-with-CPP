#include <iomanip>
#include <iostream>

int main() {
  double usd;
  std::cin >> usd;

  std::cout << std::fixed << std::setprecision(2) << usd * 1.79549 << '\n';
  return 0;
}
