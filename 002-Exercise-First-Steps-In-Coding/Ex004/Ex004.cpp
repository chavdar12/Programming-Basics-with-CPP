#include <iostream>

int main() {
  int total_pages, pages_per_hour, days_to_read;
  std::cin >> total_pages >> pages_per_hour >> days_to_read;

  std::cout << total_pages / pages_per_hour / days_to_read << '\n';

  return 0;
}
