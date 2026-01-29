#include <iostream>

int main()
{
    int nylon_sqm, paint_liters, thinner_liters, work_hours;
    std::cin >> nylon_sqm >> paint_liters >> thinner_liters >> work_hours;

    const double total_material_cost = ((nylon_sqm + 2) * 1.50) +
        (paint_liters * 1.10 * 14.50) +
        (thinner_liters * 5.00) +
        0.40;

    const double total_cost = total_material_cost + (total_material_cost * 0.30 * work_hours);

    std::cout.precision(2);
    std::cout << std::fixed << total_cost << '\n';

    return 0;
}
