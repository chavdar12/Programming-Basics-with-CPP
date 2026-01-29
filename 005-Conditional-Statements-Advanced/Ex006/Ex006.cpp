#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    std::cout << ((number != 0 && number >= -100 && number <= 100) ? "Yes" : "No") << '\n';

    return 0;
}
