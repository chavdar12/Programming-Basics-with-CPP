#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> counts(5, 0);
    const std::vector<int> ranges = {200, 400, 600, 800, INT_MAX};

    for (int i = 0; i < n; ++i)
    {
        int num;
        std::cin >> num;

        for (int j = 0; j < ranges.size(); ++j)
        {
            if (num < ranges[j])
            {
                ++counts[j];
                break;
            }
        }
    }

    for (const int count : counts)
    {
        const double percentage = (static_cast<double>(count) / n) * 100;
        std::cout << std::fixed << std::setprecision(2) << percentage << "%" << '\n';
    }

    return 0;
}
