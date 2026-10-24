#include <iostream>
#include <string>

int main() {
  int degrees;
  std::string time_of_day;

  std::cin >> degrees >> time_of_day;

  std::string outfit = "Shirt";
  std::string shoes = "Moccasins";

  if (time_of_day == "Morning") {
    if (degrees <= 18) {
      outfit = "Sweatshirt";
      shoes = "Sneakers";
    } else if (degrees >= 25) {
      outfit = "T-Shirt";
      shoes = "Sandals";
    }
  } else if (time_of_day == "Afternoon") {
    if (degrees >= 25) {
      outfit = "Swim Suit";
      shoes = "Barefoot";
    } else if (degrees > 18) {
      outfit = "T-Shirt";
      shoes = "Sandals";
    }
  }

  std::cout << "It's " << degrees << " degrees, get your " << outfit << " and "
            << shoes << "." << '\n';

  return 0;
}
