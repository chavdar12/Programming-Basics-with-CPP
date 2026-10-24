#include <climits>
#include <iostream>

int main() {
  int min = INT_MAX;
  int num;

  while (std::cin >> num && num != -1) {
    if (num < min) {
      min = num;
    }
  }

  std::cout << min << '\n';

  return 0;
}
