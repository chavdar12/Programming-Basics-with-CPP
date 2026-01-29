#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>

int main()
{
    std::string product, city;
    double quantity;

    std::cin >> product >> city >> quantity;

    std::unordered_map<std::string, std::unordered_map<std::string, double>> price_map = {
        {"Sofia", {{"coffee", 0.50}, {"water", 0.80}, {"beer", 1.20}, {"sweets", 1.45}, {"peanuts", 1.60}}},
        {"Plovdiv", {{"coffee", 0.40}, {"water", 0.70}, {"beer", 1.15}, {"sweets", 1.30}, {"peanuts", 1.50}}},
        {"Varna", {{"coffee", 0.45}, {"water", 0.70}, {"beer", 1.10}, {"sweets", 1.35}, {"peanuts", 1.55}}}
    };

    if (price_map.count(city) && price_map[city].count(product))
    {
        const double price = price_map[city][product] * quantity;
        std::cout << std::fixed << std::setprecision(2) << price << '\n';
    }
    else
    {
        std::cout << "Invalid product or city!" << '\n';
    }

    return 0;
}
