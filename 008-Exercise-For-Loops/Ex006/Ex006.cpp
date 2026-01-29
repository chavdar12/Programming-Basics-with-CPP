#include <iostream>
#include <string>

int main()
{
    std::string actor_name;
    double initial_points;
    int num_reviewers;
    std::cin >> actor_name >> initial_points >> num_reviewers;

    double total_points = initial_points;

    for (int i = 0; i < num_reviewers; ++i)
    {
        std::string reviewer_name;
        double reviewer_points;
        std::cin >> reviewer_name >> reviewer_points;

        total_points += reviewer_points * reviewer_name.length() / 2.0;
    }

    if (total_points >= 1250.5)
    {
        std::cout << "Congratulations, " << actor_name << " got a nominee for leading role with " << total_points << "!"
            << '\n';
    }
    else
    {
        const double needed_points = 1250.5 - total_points;
        std::cout << "Sorry, " << actor_name << " you need " << needed_points << " more!" << '\n';
    }

    return 0;
}
