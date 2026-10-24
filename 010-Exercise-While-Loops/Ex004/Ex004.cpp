#include <iostream>
#include <string>

int main() {
  constexpr int goal = 10000;
  int steps = 0;
  std::string input;

  while (steps < goal && std::getline(std::cin >> std::ws, input)) {
    if (input == "Going home") {
      int steps_on_the_way_home;
      std::cin >> steps_on_the_way_home;
      steps += steps_on_the_way_home;
      break;
    }
    steps += std::stoi(input);
  }

  if (steps >= goal) {
    std::cout << "Goal reached! Good job!" << '\n';
    std::cout << steps - goal << " steps over the goal!" << '\n';
  } else {
    std::cout << goal - steps << " more steps to reach goal." << '\n';
  }

  return 0;
}
