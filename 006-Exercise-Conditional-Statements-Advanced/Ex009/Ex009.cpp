#include <iomanip>
#include <iostream>
#include <string>

int main() {
  int days;
  std::string room_type, feedback;
  std::cin >> days;
  std::getline(std::cin >> std::ws, room_type);
  std::getline(std::cin, feedback);

  const int nights = days - 1;
  double total_price = 0.0;

  if (room_type == "room for one person") {
    total_price = nights * 18.0;
  } else if (room_type == "apartment") {
    total_price = nights * 25.0;
    total_price *= (days > 15) ? 0.50 : (days >= 10) ? 0.65 : 0.70;
  } else if (room_type == "president apartment") {
    total_price = nights * 35.0;
    total_price *= (days > 15) ? 0.80 : (days >= 10) ? 0.85 : 0.90;
  }

  total_price *= (feedback == "positive") ? 1.25 : 0.90;

  std::cout << std::fixed << std::setprecision(2) << total_price << '\n';

  return 0;
}
