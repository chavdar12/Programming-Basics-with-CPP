#include <iostream>
#include <iomanip>

int main() {
    double budget, clothes_price_per_statist;
    int statist_count;

    std::cin >> budget >> statist_count >> clothes_price_per_statist;

    const double total_clothes_price = statist_count * clothes_price_per_statist * (statist_count > 150 ? 0.9 : 1);
    const double total_film_cost = budget * 0.10 + total_clothes_price;

    std::cout << std::fixed << std::setprecision(2);
    if (total_film_cost > budget) {
        std::cout << "Not enough money!\nWingard needs " << total_film_cost - budget << " leva more." << '\n';
    } else {
        std::cout << "Action!\nWingard starts filming with " << budget - total_film_cost << " leva left." << '\n';
    }

    return 0;
}