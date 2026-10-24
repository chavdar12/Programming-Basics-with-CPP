#include <iomanip>
#include <iostream>

int main() {
  double square_meters;
  std::cin >> square_meters;

  const double price = square_meters * 7.61;
  const double discount = price * 0.18;

  std::cout << std::fixed << std::setprecision(2);
  std::cout << "The final price is: " << price - discount << " lv." << '\n';
  std::cout << "The discount is: " << discount << " lv." << '\n';
  return 0;
}
