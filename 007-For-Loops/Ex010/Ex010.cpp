#include <iostream>
#include <cmath>

int main()
{
    int n, num, even_sum = 0, odd_sum = 0;
    std::cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        std::cin >> num;
        i % 2 == 0 ? even_sum += num : odd_sum += num;
    }

    const int diff = std::abs(odd_sum - even_sum);

    std::cout << ((diff == 0) ? "Yes\nSum = " : "No\nDiff = ") << ((diff == 0) ? even_sum : diff) << '\n';

    return 0;
}
