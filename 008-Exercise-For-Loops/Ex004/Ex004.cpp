#include <iostream>
#include <iomanip>

int main()
{
    int age;
    double washing_machine_price, toy_price;
    std::cin >> age >> washing_machine_price >> toy_price;

    double saved_money = 0.0;
    int birthday_money = 0;

    for (int i = 1; i <= age; ++i)
    {
        if (i % 2 == 0)
        {
            birthday_money += 10;
            saved_money += birthday_money - i / 2;
        }
        else
        {
            saved_money += toy_price;
        }
    }

    if (saved_money >= washing_machine_price)
    {
        std::cout << "Yes! " << std::fixed << std::setprecision(2) << saved_money - washing_machine_price << '\n';
    }
    else
    {
        std::cout << "No! " << std::fixed << std::setprecision(2) << washing_machine_price - saved_money << '\n';
    }

    return 0;
}
