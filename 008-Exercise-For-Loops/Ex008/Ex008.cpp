#include <iostream>
#include <iomanip>
#include <map>

int main()
{
    int num_tournaments, initial_points;
    std::cin >> num_tournaments >> initial_points;

    std::map<char, int> points = {{'W', 2000}, {'F', 1200}, {'SF', 720}};
    int total_points = initial_points;
    int total_wins = 0;

    for (int i = 0; i < num_tournaments; ++i)
    {
        char stage;
        std::cin >> stage;

        total_points += points[stage];
        if (stage == 'W')
        {
            ++total_wins;
        }
    }

    const double average_points = static_cast<double>(total_points) / num_tournaments;
    const double win_percentage = static_cast<double>(total_wins) / num_tournaments * 100;

    std::cout << "Final points: " << total_points << '\n';
    std::cout << "Average points: " << std::fixed << std::setprecision(0) << average_points << '\n';
    std::cout << std::fixed << std::setprecision(2) << win_percentage << "%" << '\n';

    return 0;
}
