#include <iostream>
#include <iomanip>
#include <string>
#include <map>

int main()
{
    std::map<std::string, int> ticket_types = {{"student", 0}, {"standard", 0}, {"kid", 0}};
    int total_tickets = 0;

    while (true)
    {
        std::string film_name;
        std::getline(std::cin >> std::ws, film_name);

        if (film_name == "Finish")
        {
            break;
        }

        int free_seats;
        std::cin >> free_seats;

        std::string ticket_type;
        int sold_tickets = 0;

        while (std::cin >> ticket_type && ticket_type != "End" && sold_tickets < free_seats)
        {
            ticket_types[ticket_type]++;
            sold_tickets++;
        }

        total_tickets += sold_tickets;

        double filledPercentage = (sold_tickets * 1.0 / free_seats) * 100.0;
        std::cout << film_name << " - " << std::fixed << std::setprecision(2) << filledPercentage << "% full." << '\n';
    }

    std::cout << "Total tickets: " << total_tickets << '\n';
    for (const auto& [type, count] : ticket_types)
    {
        std::cout << std::fixed << std::setprecision(2) << count * 100.0 / total_tickets << "% " << type << " tickets."
            << '\n';
    }

    return 0;
}
