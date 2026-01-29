#include <iostream>

int main()
{
    int start_interval, end_interval, magic_number;
    std::cin >> start_interval >> end_interval >> magic_number;

    int combination_count = 0;
    bool found = false;
    for (int first_num = start_interval; first_num <= end_interval; ++first_num)
    {
        for (int second_num = start_interval; second_num <= end_interval; ++second_num)
        {
            combination_count++;
            if (first_num + second_num == magic_number)
            {
                std::cout << "Combination N:" << combination_count << " (" << first_num << " + " << second_num << " = "
                    << magic_number << ")" << std::endl;
                found = true;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    if (!found)
    {
        std::cout << combination_count << " combinations - neither equals " << magic_number << '\n';
    }

    return 0;
}
