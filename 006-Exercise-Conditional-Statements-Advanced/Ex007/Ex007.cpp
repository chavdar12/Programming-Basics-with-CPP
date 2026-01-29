#include <iostream>
#include <iomanip>
#include <map>
#include <functional>

int main()
{
    std::string month;
    int nights;
    std::cin >> month >> nights;

    std::map<std::string, std::pair<double, double>> prices = {
        {"May", {50.0, 65.0}},
        {"October", {50.0, 65.0}},
        {"June", {75.2, 68.7}},
        {"September", {75.2, 68.7}},
        {"July", {76.0, 77.0}},
        {"August", {76.0, 77.0}}
    };

    double studio_price = prices[month].first * nights;
    double apartment_price = prices[month].second * nights;

    if (nights > 14)
    {
        studio_price *= (month == "May" || month == "October") ? 0.7 : 0.8;
        apartment_price *= 0.9;
    }
    else if (nights > 7 && (month == "May" || month == "October"))
    {
        studio_price *= 0.95;
    }

    std::cout << "Apartment: " << std::fixed << std::setprecision(2) << apartment_price << " lv." << '\n';
    std::cout << "Studio: " << std::fixed << std::setprecision(2) << studio_price << " lv." << '\n';

    return 0;
}
