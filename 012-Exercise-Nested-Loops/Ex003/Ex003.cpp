#include <iostream>
#include <string>

bool is_prime(const int num)
{
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0) return false;
    }
    return true;
}

int main()
{
    long long prime_sum = 0, non_prime_sum = 0;
    std::string input;

    while (std::cin >> input && input != "stop")
    {
        const int num = std::stoi(input);
        if (num < 0)
        {
            std::cout << "Number is negative.\n";
            continue;
        }
        (is_prime(num) ? prime_sum : non_prime_sum) += num;
    }

    std::cout << "Sum of all prime numbers is: " << prime_sum << "\n";
    std::cout << "Sum of all non prime numbers is: " << non_prime_sum << "\n";

    return 0;
}
