#include <iostream>

int main()
{
    int annual_fee;
    std::cin >> annual_fee;

    const double total_cost = annual_fee * (1 + 0.60 + 0.60 * 0.80 + 0.60 * 0.80 * 0.25 + 0.60 * 0.80 * 0.25 * 0.20);

    std::cout.precision(2);
    std::cout << std::fixed << total_cost << '\n';

    return 0;
}
