#include <iostream>

int main()
{
    int chicken_menus, fish_menus, vegetarian_menus;
    std::cin >> chicken_menus >> fish_menus >> vegetarian_menus;

    const double total_menu_price = chicken_menus * 10.35 +
        fish_menus * 12.40 +
        vegetarian_menus * 8.15;

    const double total_price = total_menu_price + (total_menu_price * 0.20) + 2.50;

    std::cout.precision(2);
    std::cout << std::fixed << total_price << '\n';

    return 0;
}
