#include <iostream>
#include <iomanip>
#include <map>

int main()
{
    int days;
    std::string room_type, feedback;
    std::cin >> days >> room_type >> feedback;

    std::map<std::string, double> room_prices = {
        {"room for one person", 18.0}, {"apartment", 25.0}, {"president apartment", 35.0}
    };
    const double price_per_night = room_prices[room_type];

    double total_price = price_per_night * (days - 1);

    if (room_type != "room for one person")
    {
        if (days > 15)
        {
            total_price *= (room_type == "apartment") ? 0.50 : 0.80;
        }
        else if (days >= 10)
        {
            total_price *= (room_type == "apartment") ? 0.65 : 0.85;
        }
        else
        {
            total_price *= 0.70;
        }
    }

    total_price *= (feedback == "positive") ? 1.25 : 0.90;

    std::cout << std::fixed << std::setprecision(2) << total_price << '\n';

    return 0;
}
