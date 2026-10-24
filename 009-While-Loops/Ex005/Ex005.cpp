#include <iomanip>
#include <iostream>
#include <string>

int main() {
  double total = 0;
  std::string input;

  std::cout << std::fixed << std::setprecision(2);
  while (std::cin >> input && input != "NoMoreMoney") {
    const double amount = std::stod(input);
    if (amount < 0) {
      std::cout << "Invalid operation!" << '\n';
      break;
    }

    std::cout << "Increase: " << amount << '\n';
    total += amount;
  }

  std::cout << "Total: " << total << '\n';

  return 0;
}
