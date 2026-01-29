#include <iostream>
#include <array>

int main()
{
    int day_number;
    std::cin >> day_number;

    const std::array<std::string, 8> days = {
        "Error", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
    };

    std::cout << days[day_number] << '\n';

    return 0;
}
