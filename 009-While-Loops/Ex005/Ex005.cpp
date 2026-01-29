#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    double total = 0;
    std::string input;

    while (true)
    {
        std::cin >> input;

        if (input == "NoMoreMoney")
        {
            break;
        }

        const double amount = std::stod(input);
        if (amount < 0)
        {
            std::cout << "Invalid operation!" << '\n';
            return 0;
        }

        std::cout << "Increase: " << std::fixed << std::setprecision(2) << amount << '\n';
        total += amount;
    }

    std::cout << "Total: " << std::fixed << std::setprecision(2) << total << '\n';

    return 0;
}
