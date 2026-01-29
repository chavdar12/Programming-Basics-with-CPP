#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    std::cout << ((number == 0 || (number >= 100 && number <= 200)) ? "" : "invalid") << '\n';

    return 0;
}
