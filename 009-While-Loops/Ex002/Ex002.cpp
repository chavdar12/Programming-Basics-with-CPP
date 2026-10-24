#include <iostream>
#include <string>

int main() {
  std::string username, password, input;

  std::cin >> username >> password;

  while (std::cin >> input && input != password) {
    std::cout << "Incorrect password! Try again: ";
  }

  std::cout << "Welcome " << username << "!" << '\n';

  return 0;
}
