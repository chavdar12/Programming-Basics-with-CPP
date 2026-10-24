#include <iomanip>
#include <iostream>
#include <string>

int main() {
  int jurors;
  std::cin >> jurors;

  double total_sum = 0.0;
  int total_grades = 0;
  std::string presentation_name;

  std::cout << std::fixed << std::setprecision(2);
  while (std::getline(std::cin >> std::ws, presentation_name) &&
         presentation_name != "Finish") {
    double presentation_sum = 0.0;
    for (int i = 0; i < jurors; ++i) {
      double grade;
      std::cin >> grade;
      presentation_sum += grade;
    }

    total_sum += presentation_sum;
    total_grades += jurors;

    std::cout << presentation_name << " - " << presentation_sum / jurors << "."
              << '\n';
  }

  std::cout << "Student's final assessment is " << total_sum / total_grades
            << "." << '\n';

  return 0;
}
