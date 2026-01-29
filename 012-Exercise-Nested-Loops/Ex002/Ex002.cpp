#include <iostream>

bool has_equal_sum(int num)
{
    int even_sum = 0, odd_sum = 0, position = 1;

    while (num > 0)
    {
        const int digit = num % 10;
        (position++ % 2 == 0) ? even_sum += digit : odd_sum += digit;
        num /= 10;
    }

    return even_sum == odd_sum;
}

int main()
{
    int first, second;
    std::cin >> first >> second;

    bool printed = false;

    for (int i = first + 1; i < second && !printed; ++i)
    {
        if (has_equal_sum(i))
        {
            std::cout << i << " ";
            printed = true;
        }
    }

    if (!printed) std::cout << "No numbers found";

    return 0;
}
