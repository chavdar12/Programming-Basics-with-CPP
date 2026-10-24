#include <iomanip>
#include <iostream>
#include <string>

int main() {
  int student = 0, standard = 0, kid = 0;
  std::string film_name;

  std::cout << std::fixed << std::setprecision(2);
  while (std::getline(std::cin >> std::ws, film_name) &&
         film_name != "Finish") {
    int free_seats;
    std::cin >> free_seats;

    std::string ticket_type;
    int sold_tickets = 0;

    while (sold_tickets < free_seats && std::cin >> ticket_type &&
           ticket_type != "End") {
      if (ticket_type == "student") {
        ++student;
      } else if (ticket_type == "standard") {
        ++standard;
      } else if (ticket_type == "kid") {
        ++kid;
      }
      ++sold_tickets;
    }

    std::cout << film_name << " - " << sold_tickets * 100.0 / free_seats
              << "% full." << '\n';
  }

  const int total_tickets = student + standard + kid;
  std::cout << "Total tickets: " << total_tickets << '\n';
  std::cout << student * 100.0 / total_tickets << "% student tickets." << '\n';
  std::cout << standard * 100.0 / total_tickets << "% standard tickets."
            << '\n';
  std::cout << kid * 100.0 / total_tickets << "% kid tickets." << '\n';

  return 0;
}
