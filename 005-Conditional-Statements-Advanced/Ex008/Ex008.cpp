#include <iostream>
#include <unordered_map>

int main()
{
    std::string day;
    std::cin >> day;

    std::unordered_map<std::string, int> price_map = {
        {"Monday", 12}, {"Tuesday", 12}, {"Friday", 12},
        {"Wednesday", 14}, {"Thursday", 14},
        {"Saturday", 16}, {"Sunday", 16}
    };

    if (price_map.count(day))
    {
        std::cout << "Ticket price for " << day << ": " << price_map[day] << '\n';
    }
    else
    {
        std::cout << "Invalid day!" << '\n';
    }

    return 0;
}
