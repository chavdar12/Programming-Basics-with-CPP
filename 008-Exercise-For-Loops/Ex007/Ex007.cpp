#include <array>
#include <iomanip>
#include <iostream>

int main() {
  int num_groups;
  std::cin >> num_groups;

  // Musala <=5, Monblan <=12, Kilimanjaro <=25, K2 <=40, Everest >40
  constexpr std::array<int, 4> limits = {5, 12, 25, 40};
  std::array<int, 5> counts{};
  int total_people = 0;

  for (int i = 0; i < num_groups; ++i) {
    int group_size;
    std::cin >> group_size;
    total_people += group_size;

    size_t peak = 0;
    while (peak < limits.size() && group_size > limits[peak]) {
      ++peak;
    }
    counts[peak] += group_size;
  }

  std::cout << std::fixed << std::setprecision(2);
  for (const int count : counts) {
    std::cout << static_cast<double>(count) / total_people * 100 << "%" << '\n';
  }

  return 0;
}
