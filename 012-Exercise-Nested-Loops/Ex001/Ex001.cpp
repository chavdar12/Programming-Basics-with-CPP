#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int current = 1;
  for (int row = 1; current <= n; ++row) {
    for (int col = 1; col <= row && current <= n; ++col) {
      std::cout << (col == 1 ? "" : " ") << current++;
    }
    std::cout << '\n';
  }

  return 0;
}
