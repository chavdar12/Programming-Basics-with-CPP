#include <iostream>

int main() {
  int n;
  std::cin >> n;

  for (int i = 0; i <= n; i += 2) {
    std::cout << (1LL << i) << " ";
  }
  std::cout << '\n';

  return 0;
}
