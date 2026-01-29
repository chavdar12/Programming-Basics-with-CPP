#include <iostream>
#include <iomanip>
#include <string>
#include <unordered_map>

int main()
{
    std::string city;
    double sales;

    std::cin >> city >> sales;

    if (sales < 0)
    {
        std::cout << "error" << '\n';
        return 0;
    }

    std::unordered_map<std::string, std::vector<std::pair<double, double>>> commission_map = {
        {"Sofia", {{500, 0.05}, {1000, 0.07}, {10000, 0.08}, {std::numeric_limits<double>::max(), 0.12}}},
        {"Varna", {{500, 0.045}, {1000, 0.075}, {10000, 0.10}, {std::numeric_limits<double>::max(), 0.13}}},
        {"Plovdiv", {{500, 0.055}, {1000, 0.08}, {10000, 0.12}, {std::numeric_limits<double>::max(), 0.145}}}
    };

    double commission = -1.0;
    if (commission_map.count(city))
    {
        for (const auto& pair : commission_map[city])
        {
            if (sales <= pair.first)
            {
                commission = pair.second * sales;
                break;
            }
        }
    }

    if (commission == -1)
    {
        std::cout << "error" << '\n';
    }
    else
    {
        std::cout << std::fixed << std::setprecision(2) << commission << '\n';
    }

    return 0;
}
