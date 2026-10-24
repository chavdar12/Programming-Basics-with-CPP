#include <algorithm>
#include <array>
#include <iomanip>
#include <iostream>

int main() {
  int n;
  std::cin >> n;

  // Ranges: <200, 200-399, 400-599, 600-799, >=800
  std::array<int, 5> counts{};

  for (int i = 0; i < n; ++i) {
    int num;
    std::cin >> num;
    ++counts[std::min(num / 200, 4)];
  }

  std::cout << std::fixed << std::setprecision(2);
  for (const int count : counts) {
    std::cout << static_cast<double>(count) / n * 100 << "%" << '\n';
  }

  return 0;
}
