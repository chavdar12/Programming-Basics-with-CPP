#include <iostream>
#include <string>

int main()
{
    std::string destination;
    int min_budget, saved_money, total_saved = 0;

    std::cin >> destination;
    std::cin >> min_budget;

    while (destination != "End")
    {
        while (total_saved < min_budget)
        {
            std::cin >> saved_money;
            total_saved += saved_money;
        }

        std::cout << "Going to " << destination << "!" << '\n';

        total_saved = 0;
        std::cin >> destination;
        if (destination == "End")
        {
            break;
        }
        std::cin >> min_budget;
    }

    return 0;
}
