#include <array>
#include <iostream>
#include <string>

int main() {
  int day_number;
  std::cin >> day_number;

  const std::array<std::string, 7> days = {"Monday",   "Tuesday", "Wednesday",
                                           "Thursday", "Friday",  "Saturday",
                                           "Sunday"};

  if (day_number >= 1 && day_number <= 7) {
    std::cout << days[day_number - 1] << '\n';
  } else {
    std::cout << "Error" << '\n';
  }

  return 0;
}
