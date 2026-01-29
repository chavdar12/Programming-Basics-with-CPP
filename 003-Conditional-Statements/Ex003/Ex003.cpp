#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    std::cout << (number % 2 == 0 ? "even" : "odd") << '\n';
}
