#include <iostream>
#include <array>

int main()
{
    double change;
    std::cin >> change;

    int coins = 0;
    int cents = change * 100;

    const std::array<int, 9> coin_values = {200, 100, 50, 20, 10, 5, 2, 1};

    for (const int value : coin_values)
    {
        coins += cents / value;
        cents %= value;
    }

    std::cout << coins << "\n";

    return 0;
}
