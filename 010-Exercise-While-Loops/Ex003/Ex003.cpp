#include <iostream>
#include <string>

int main()
{
    double excursion_cost, available_money;
    std::cin >> excursion_cost >> available_money;

    int consecutive_days_spent = 0;
    int total_days = 0;

    while (available_money < excursion_cost && consecutive_days_spent < 5)
    {
        std::string action;
        double amount;
        std::cin >> action >> amount;

        total_days++;

        if (action == "save")
        {
            available_money += amount;
            consecutive_days_spent = 0;
        }
        else if (action == "spend")
        {
            available_money -= amount;
            consecutive_days_spent++;
            if (available_money < 0)
            {
                available_money = 0;
            }
        }
    }

    if (consecutive_days_spent == 5)
    {
        std::cout << "You can't save the money." << '\n';
        std::cout << total_days << '\n';
    }
    else
    {
        std::cout << "You saved the money for " << total_days << " days." << '\n';
    }

    return 0;
}
