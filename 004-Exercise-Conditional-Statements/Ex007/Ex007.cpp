#include <iostream>
#include <iomanip>

int main()
{
    double budget, video_cards, processors, ram;
    std::cin >> budget >> video_cards >> processors >> ram;

    const double video_cards_cost = video_cards * 250;
    const double total_cost = video_cards_cost * (1 + processors * 0.35 + ram * 0.1) * (
        video_cards > processors ? 0.85 : 1);

    std::cout << std::fixed << std::setprecision(2);
    if (budget >= total_cost)
    {
        std::cout << "You have " << budget - total_cost << " leva left!" << '\n';
    }
    else
    {
        std::cout << "Not enough money! You need " << total_cost - budget << " leva more!" << '\n';
    }

    return 0;
}
