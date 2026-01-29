#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int valid_combinations_count = 0;
    for (int x1 = 0; x1 <= n; ++x1)
    {
        for (int x2 = 0; x2 <= n; ++x2)
        {
            for (int x3 = 0; x3 <= n; ++x3)
            {
                if (x1 + x2 + x3 == n)
                {
                    valid_combinations_count++;
                }
            }
        }
    }

    std::cout << "Number of valid combinations: " << valid_combinations_count << '\n';

    return 0;
}
