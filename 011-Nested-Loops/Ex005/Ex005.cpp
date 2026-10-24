#include <iostream>
#include <string>

int main() {
  std::string destination;

  while (std::cin >> destination && destination != "End") {
    int min_budget, saved_money, total_saved = 0;
    std::cin >> min_budget;

    while (total_saved < min_budget && std::cin >> saved_money) {
      total_saved += saved_money;
    }

    std::cout << "Going to " << destination << "!" << '\n';
  }

  return 0;
}
