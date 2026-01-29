#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
    int num_groups;
    std::cin >> num_groups;

    std::vector<int> group_sizes(num_groups);
    std::vector<int> counts(5, 0);
    const std::vector<int> ranges = {5, 12, 25, 40, INT_MAX};

    int total_people = 0;

    for (int i = 0; i < num_groups; ++i)
    {
        std::cin >> group_sizes[i];
        total_people += group_sizes[i];

        for (int j = 0; j < ranges.size(); ++j)
        {
            if (group_sizes[i] <= ranges[j])
            {
                counts[j] += group_sizes[i];
                break;
            }
        }
    }

    for (const int count : counts)
    {
        const double percentage = (static_cast<double>(count) / total_people) * 100;
        std::cout << std::fixed << std::setprecision(2) << percentage << "%" << '\n';
    }

    return 0;
}
