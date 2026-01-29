#include <iostream>
#include <iomanip>
#include <string>
#include <map>

int main()
{
    std::string flower_type;
    int flower_count, budget;

    std::cin >> flower_type >> flower_count >> budget;

    std::map<std::string, std::pair<double, double>> flower_prices = {
        {"Roses", {5.00, 0.1}},
        {"Dahlias", {3.80, 0.15}},
        {"Tulips", {2.80, 0.15}},
        {"Narcissus", {3.00, 0.15}},
        {"Gladiolus", {2.50, 0.20}}
    };

    double price = flower_prices[flower_type].first;
    double discount = flower_prices[flower_type].second;

    if ((flower_type == "Narcissus" || flower_type == "Gladiolus") && flower_count < 120)
        price += price * discount;
    else if (flower_count > 80)
        discount = -discount;

    const double total_price = flower_count * price * (1 + discount);
    const double remaining_budget = budget - total_price;

    std::cout << std::fixed << std::setprecision(2);
    if (remaining_budget >= 0)
        std::cout << "Hey, you have a great garden with " << flower_count << " " << flower_type << " and " <<
            remaining_budget
            << " leva left." << '\n';
    else
        std::cout << "Not enough money, you need " << -remaining_budget << " leva more." << '\n';

    return 0;
}
