#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i <= n; i++)
    {
        std::cout << static_cast<int>(pow(2, 2 * i)) << " ";
    }
    std::cout << '\n';

    return 0;
}
