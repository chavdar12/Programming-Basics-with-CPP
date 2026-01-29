#include <iostream>
#include <iomanip>
#include <string>
#include <unordered_map>

int main()
{
    std::string fruit, day;
    double quantity;

    std::cin >> fruit >> day >> quantity;

    std::unordered_map<std::string, double> weekday_prices = {
        {"banana", 2.50}, {"apple", 1.20}, {"orange", 0.85}, {"grapefruit", 1.45},
        {"kiwi", 2.70}, {"pineapple", 5.50}, {"grapes", 3.85}
    };

    std::unordered_map<std::string, double> weekend_prices = {
        {"banana", 2.70}, {"apple", 1.25}, {"orange", 0.90}, {"grapefruit", 1.60},
        {"kiwi", 3.00}, {"pineapple", 5.60}, {"grapes", 4.20}
    };

    double price = 0;
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if (weekday_prices.count(fruit)) price = weekday_prices[fruit];
    }
    else if (day == "Saturday" || day == "Sunday")
    {
        if (weekend_prices.count(fruit)) price = weekend_prices[fruit];
    }

    if (price != 0.0)
    {
        std::cout << std::fixed << std::setprecision(2) << quantity * price << '\n';
    }
    else
    {
        std::cout << "error" << '\n';
    }

    return 0;
}
