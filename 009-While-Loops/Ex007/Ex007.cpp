#include <iostream>
#include <climits>

int main()
{
    int min = INT_MAX;
    int num;

    while (true)
    {
        std::cin >> num;

        if (num == -1)
        {
            break;
        }

        if (num < min)
        {
            min = num;
        }
    }

    std::cout << min << '\n';

    return 0;
}
