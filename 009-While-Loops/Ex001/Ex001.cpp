#include <iostream>
#include <string>

int main() {
  std::string input;

  while (std::cin >> input && input != "Stop") {
    std::cout << input << '\n';
  }

  return 0;
}
