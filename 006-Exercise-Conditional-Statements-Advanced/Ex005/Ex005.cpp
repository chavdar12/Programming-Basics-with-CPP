#include <iostream>
#include <string>
#include <iomanip>
#include <map>

int main()
{
    double budget;
    std::string season;
    std::cin >> budget >> season;

    std::map<std::string, std::pair<double, double>> destination_costs = {
        {"Bulgaria", {0.3, 0.7}},
        {"Balkans", {0.4, 0.8}},
        {"Europe", {0.9, 0.9}}
    };

    std::string destination;

    if (budget <= 100)
    {
        destination = "Bulgaria";
    }
    else if (budget <= 1000)
    {
        destination = "Balkans";
    }
    else
    {
        destination = "Europe";
    }

    const double spent_amount = budget * (season == "summer"
                                              ? destination_costs[destination].first
                                              : destination_costs[destination].second);

    const std::string vacation_type = (destination == "Europe") ? "Hotel" : "Camp";

    std::cout << "Somewhere in " << destination << '\n';
    std::cout << vacation_type << " - " << std::fixed << std::setprecision(2) << spent_amount << '\n';

    return 0;
}
