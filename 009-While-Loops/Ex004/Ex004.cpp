#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int current_number = 1;
    while (current_number <= n)
    {
        std::cout << current_number << " ";
        current_number = current_number * 2 + 1;
    }

    return 0;
}
