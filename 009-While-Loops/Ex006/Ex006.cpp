#include <climits>
#include <iostream>

int main() {
  int max = INT_MIN;
  int num;

  while (std::cin >> num && num != -1) {
    if (num > max) {
      max = num;
    }
  }

  std::cout << max << '\n';

  return 0;
}
