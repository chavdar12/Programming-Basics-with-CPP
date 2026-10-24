#include <iomanip>
#include <iostream>
#include <string>

int main() {
  std::string name;
  std::cin >> name;

  int grade = 1;
  int failures = 0;
  double sum_grades = 0.0;
  double annual_grade;

  // A failed year (< 4.00) is repeated once; a second failure means exclusion.
  while (grade <= 12 && std::cin >> annual_grade) {
    if (annual_grade < 4.00) {
      if (++failures > 1) {
        std::cout << name << " has been excluded at " << grade << " grade"
                  << '\n';
        return 0;
      }
      continue;
    }

    sum_grades += annual_grade;
    ++grade;
  }

  std::cout << name << " graduated. Average grade: " << std::fixed
            << std::setprecision(2) << sum_grades / 12 << '\n';

  return 0;
}
