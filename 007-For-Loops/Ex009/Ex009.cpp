#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;

    int left_sum = 0;
    int right_sum = 0;

    for (int i = 0; i < n; ++i)
    {
        int num;
        std::cin >> num;
        left_sum += num;
    }

    for (int i = 0; i < n; ++i)
    {
        int num;
        std::cin >> num;
        right_sum += num;
    }

    const int diff = abs(left_sum - right_sum);

    if (diff == 0)
    {
        std::cout << "Yes, sum = " << left_sum << '\n';
    }
    else
    {
        std::cout << "No, diff = " << diff << '\n';
    }

    return 0;
}
