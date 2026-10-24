#include <iomanip>
#include <iostream>
#include <string>

int main() {
  constexpr double needed_points = 1250.5;

  std::string actor_name;
  double total_points;
  int num_reviewers;
  std::cin >> actor_name >> total_points >> num_reviewers;

  for (int i = 0; i < num_reviewers && total_points < needed_points; ++i) {
    std::string reviewer_name;
    double reviewer_points;
    std::cin >> reviewer_name >> reviewer_points;

    total_points += reviewer_points * reviewer_name.length() / 2.0;
  }

  std::cout << std::fixed << std::setprecision(1);
  if (total_points >= needed_points) {
    std::cout << "Congratulations, " << actor_name
              << " got a nominee for leading role with " << total_points << "!"
              << '\n';
  } else {
    std::cout << "Sorry, " << actor_name << " you need "
              << needed_points - total_points << " more!" << '\n';
  }

  return 0;
}
