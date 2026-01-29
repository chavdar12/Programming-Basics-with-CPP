#include <iomanip>
#include <iostream>

int main()
{
    int pencils, markers, liters_of_cleaner, discount_percent;
    constexpr double pencil_price = 5.80;
    constexpr double marker_price = 7.20;
    constexpr double cleaner_price_per_liter = 1.20;

    std::cin >> pencils >> markers >> liters_of_cleaner >> discount_percent;

    const double total_price = pencils * pencil_price + markers * marker_price + liters_of_cleaner *
        cleaner_price_per_liter;

    const double discounted_price = total_price - (total_price * discount_percent / 100.0);

    std::cout << std::fixed << std::setprecision(2) << discounted_price << '\n';

    return 0;
}
