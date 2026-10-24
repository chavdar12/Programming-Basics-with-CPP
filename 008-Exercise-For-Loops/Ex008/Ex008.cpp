#include <iomanip>
#include <iostream>
#include <string>

int main() {
  int num_tournaments, initial_points;
  std::cin >> num_tournaments >> initial_points;

  int gained_points = 0;
  int total_wins = 0;

  for (int i = 0; i < num_tournaments; ++i) {
    std::string stage;
    std::cin >> stage;

    if (stage == "W") {
      gained_points += 2000;
      ++total_wins;
    } else if (stage == "F") {
      gained_points += 1200;
    } else if (stage == "SF") {
      gained_points += 720;
    }
  }

  std::cout << "Final points: " << initial_points + gained_points << '\n';
  std::cout << "Average points: " << gained_points / num_tournaments << '\n';
  std::cout << std::fixed << std::setprecision(2)
            << static_cast<double>(total_wins) / num_tournaments * 100 << "%"
            << '\n';

  return 0;
}
