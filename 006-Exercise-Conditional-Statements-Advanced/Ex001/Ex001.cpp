#include <iostream>
#include <iomanip>
#include <unordered_map>

int main()
{
    std::string projection_type;
    int rows, columns;

    std::unordered_map<std::string, double> ticket_prices = {{"Premiere", 12.00}, {"Normal", 7.50}, {"Discount", 5.00}};

    std::cin >> projection_type >> rows >> columns;

    const double income = ticket_prices[projection_type] * rows * columns;

    std::cout << std::fixed << std::setprecision(2) << income << " leva" << '\n';

    return 0;
}
