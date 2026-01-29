#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);
    for (auto& num : numbers)
    {
        std::cin >> num;
    }

    const int max_num = *std::max_element(numbers.begin(), numbers.end());
    const int sum_except_max = std::accumulate(numbers.begin(), numbers.end(), 0) - max_num;

    const auto it = std::find(numbers.begin(), numbers.end(), sum_except_max);

    if (it != numbers.end())
    {
        std::cout << "Yes\nSum = " << sum_except_max << '\n';
    }
    else
    {
        std::cout << "No\nDiff = " << std::abs(max_num - sum_except_max) << '\n';
    }

    return 0;
}
