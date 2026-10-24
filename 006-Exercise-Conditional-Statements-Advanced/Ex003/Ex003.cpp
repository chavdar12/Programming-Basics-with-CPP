#include <iomanip>
#include <iostream>
#include <string>

int main() {
  std::string flower_type;
  int flower_count, budget;

  std::cin >> flower_type >> flower_count >> budget;

  double total_price = 0.0;

  if (flower_type == "Roses") {
    total_price = flower_count * 5.00 * (flower_count > 80 ? 0.90 : 1);
  } else if (flower_type == "Dahlias") {
    total_price = flower_count * 3.80 * (flower_count > 90 ? 0.85 : 1);
  } else if (flower_type == "Tulips") {
    total_price = flower_count * 2.80 * (flower_count > 80 ? 0.85 : 1);
  } else if (flower_type == "Narcissus") {
    total_price = flower_count * 3.00 * (flower_count < 120 ? 1.15 : 1);
  } else if (flower_type == "Gladiolus") {
    total_price = flower_count * 2.50 * (flower_count < 80 ? 1.20 : 1);
  }

  const double remaining_budget = budget - total_price;

  std::cout << std::fixed << std::setprecision(2);
  if (remaining_budget >= 0)
    std::cout << "Hey, you have a great garden with " << flower_count << " "
              << flower_type << " and " << remaining_budget << " leva left."
              << '\n';
  else
    std::cout << "Not enough money, you need " << -remaining_budget
              << " leva more." << '\n';

  return 0;
}
