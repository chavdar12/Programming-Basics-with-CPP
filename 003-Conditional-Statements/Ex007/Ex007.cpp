#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

int main() {
  std::string figure;
  std::cin >> figure;

  double area = 0.0;

  if (figure == "square") {
    double side;
    std::cin >> side;
    area = side * side;
  } else if (figure == "rectangle") {
    double width, height;
    std::cin >> width >> height;
    area = width * height;
  } else if (figure == "circle") {
    double radius;
    std::cin >> radius;
    area = std::acos(-1.0) * radius * radius;
  } else if (figure == "triangle") {
    double base, height;
    std::cin >> base >> height;
    area = 0.5 * base * height;
  }

  std::cout << "Area: " << std::fixed << std::setprecision(3) << area << '\n';
}
