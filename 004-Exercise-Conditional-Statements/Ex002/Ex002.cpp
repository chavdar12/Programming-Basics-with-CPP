#include <iostream>

int main() {
    int initial_points;
    std::cin >> initial_points;

    double bonus_points = (initial_points <= 100) ? 5 : 
                         (initial_points <= 1000) ? initial_points * 0.2 : 
                         initial_points * 0.1;

    bonus_points += (initial_points % 2 == 0) ? 1 : 0;
    bonus_points += (initial_points % 10 == 5) ? 2 : 0;

    std::cout << "Bonus points: " << bonus_points << '\n';
    std::cout << "Total points: " << initial_points + bonus_points << '\n';

    return 0;
}