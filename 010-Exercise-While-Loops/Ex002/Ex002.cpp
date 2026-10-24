#include <iomanip>
#include <iostream>
#include <string>

int main() {
  int poor_grades, grade, problems_count = 0, poor_grades_count = 0;
  double total_grade = 0.0;
  std::string task_name, last_task;

  std::cin >> poor_grades;
  std::cin.ignore();

  while (std::getline(std::cin, task_name) && task_name != "Enough") {
    if (!(std::cin >> grade)) {
      break;
    }
    std::cin.ignore();
    total_grade += grade;
    problems_count++;
    last_task = task_name;
    if (grade <= 4 && ++poor_grades_count == poor_grades) {
      std::cout << "You need a break, " << poor_grades << " poor grades.\n";
      return 0;
    }
  }

  std::cout << std::fixed << std::setprecision(2);
  std::cout << "Average score: " << total_grade / problems_count << "\n";
  std::cout << "Number of problems: " << problems_count << "\n";
  std::cout << "Last problem: " << last_task << "\n";

  return 0;
}
