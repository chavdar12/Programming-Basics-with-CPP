#include <iomanip>
#include <iostream>

int main() {
  double radians;
  std::cin >> radians;

  std::cout << std::fixed << std::setprecision(2) << radians * 180 / 3.14
            << '\n';
  return 0;
}
