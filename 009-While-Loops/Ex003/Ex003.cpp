#include <iostream>

int main() {
  int target_sum;
  int current_sum = 0;

  std::cin >> target_sum;

  int number;
  while (current_sum < target_sum && std::cin >> number) {
    current_sum += number;
  }

  std::cout << current_sum << '\n';

  return 0;
}
