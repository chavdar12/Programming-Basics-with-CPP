#include <cmath>
#include <iostream>

int main()
{
    int total_pages, pages_per_hour, days_to_read;
    std::cin >> total_pages >> pages_per_hour >> days_to_read;

    const double total_hours = static_cast<double>(total_pages) / pages_per_hour;

    const double hours_per_day = floor(total_hours / days_to_read);

    std::cout << static_cast<int>(hours_per_day) << '\n';

    return 0;
}
