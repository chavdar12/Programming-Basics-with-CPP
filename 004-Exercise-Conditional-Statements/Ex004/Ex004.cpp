#include <iostream>
#include <iomanip>

int main() {
    double excursion_price;
    int puzzle_count, doll_count, teddy_bear_count, minion_count, truck_count;

    std::cin >> excursion_price >> puzzle_count >> doll_count >> teddy_bear_count >> minion_count >> truck_count;

    double total_toys_price = (puzzle_count * 2.60) + (doll_count * 3.00) + (teddy_bear_count * 4.10) + (minion_count * 8.20) + (truck_count * 2.00);

    if ((puzzle_count + doll_count + teddy_bear_count + minion_count + truck_count) >= 50) {
        total_toys_price *= 0.75;
    }

    total_toys_price *= 0.90;

    std::cout << std::fixed << std::setprecision(2);
    if (total_toys_price >= excursion_price) {
        std::cout << "Yes! " << total_toys_price - excursion_price << " lv left." << '\n';
    } else {
        std::cout << "Not enough money! " << excursion_price - total_toys_price << " lv needed." << '\n';
    }

    return 0;
}