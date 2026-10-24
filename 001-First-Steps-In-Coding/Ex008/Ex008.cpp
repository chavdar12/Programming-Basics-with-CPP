#include <iomanip>
#include <iostream>

int main() {
  int dogs, other_animals;
  std::cin >> dogs >> other_animals;

  std::cout << std::fixed << std::setprecision(1)
            << dogs * 2.50 + other_animals * 4 << " lv." << '\n';
  return 0;
}
