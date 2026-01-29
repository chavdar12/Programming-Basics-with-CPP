#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = n; i >= 1; i--)
    {
        std::cout << i << " ";
    }
    std::cout << '\n';

    return 0;
}
