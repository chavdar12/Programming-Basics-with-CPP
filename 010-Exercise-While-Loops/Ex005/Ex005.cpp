#include <array>
#include <cmath>
#include <iostream>

int main() {
  double change;
  std::cin >> change;

  // Round, since e.g. 1.23 * 100 is 122.999... in floating point.
  long cents = std::lround(change * 100);
  int coins = 0;

  constexpr std::array<int, 8> coin_values = {200, 100, 50, 20, 10, 5, 2, 1};

  for (const int value : coin_values) {
    coins += cents / value;
    cents %= value;
  }

  std::cout << coins << "\n";

  return 0;
}
