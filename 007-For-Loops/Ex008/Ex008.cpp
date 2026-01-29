#include <iostream>
#include <climits>

int main()
{
    int n;
    std::cin >> n;

    int max_num = INT_MIN;
    int min_num = INT_MAX;

    for (int i = 0; i < n; ++i)
    {
        int num;
        std::cin >> num;

        if (num > max_num)
        {
            max_num = num;
        }

        if (num < min_num)
        {
            min_num = num;
        }
    }

    std::cout << "Max number: " << max_num << '\n';
    std::cout << "Min number: " << min_num << '\n';

    return 0;
}
