#include <iostream>
#include <string>
#include <iomanip>
#include <map>

int main()
{
    int budget, fishermen;
    std::string season;

    std::cin >> budget >> season >> fishermen;

    std::map<std::string, double> season_prices = {
        {"Spring", 3000}, {"Summer", 4200}, {"Autumn", 4200}, {"Winter", 2600}
    };

    double price = season_prices[season];

    if (fishermen <= 6)
    {
        price *= 0.9;
    }
    else if (fishermen <= 11)
    {
        price *= 0.85;
    }
    else
    {
        price *= 0.75;
    }

    if (fishermen % 2 == 0 && season != "Autumn")
    {
        price *= 0.95;
    }

    const double remaining = budget - price;

    std::cout << std::fixed << std::setprecision(2);
    if (remaining >= 0)
    {
        std::cout << "Yes! You have " << remaining << " leva left." << '\n';
    }
    else
    {
        std::cout << "Not enough money! You need " << -remaining << " leva." << '\n';
    }

    return 0;
}
