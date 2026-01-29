#include <iostream>
#include <climits>

int main()
{
    int max = INT_MIN;
    int num;

    while (true)
    {
        std::cin >> num;

        if (num == -1)
        {
            break;
        }

        if (num > max)
        {
            max = num;
        }
    }

    std::cout << max << '\n';

    return 0;
}
