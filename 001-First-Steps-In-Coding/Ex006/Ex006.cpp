#include <iostream>
#include <string>

int main() {
  std::string first_name, last_name, town;
  int age;
  std::cin >> first_name >> last_name >> age >> town;

  std::cout << "You are " << first_name << " " << last_name << ", a " << age
            << "-years old person from " << town << "." << '\n';
  return 0;
}
