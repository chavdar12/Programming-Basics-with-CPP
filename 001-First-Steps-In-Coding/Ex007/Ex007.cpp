#include <iostream>
#include <string>

int main() {
  std::string name;
  int count_projects;
  std::cin >> name >> count_projects;

  std::cout << "The architect " << name << " will need " << count_projects * 3
            << " hours to complete " << count_projects << " project/s." << '\n';
  return 0;
}
