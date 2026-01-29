#include <iostream>
#include <iomanip>
#include <map>
#include <functional>

int main()
{
    int n1, n2;
    char op;
    std::cin >> n1 >> n2 >> op;

    std::map<char, std::function<void(int, int)>> operations = {
        {
            '+',
            [](const int a, const int b)
            {
                std::cout << a << " + " << b << " = " << a + b << " - " << ((a + b) % 2 == 0 ? "even" : "odd") <<
                    '\n';
            }
        },
        {
            '-',
            [](const int a, const int b)
            {
                std::cout << a << " - " << b << " = " << a - b << " - " << ((a - b) % 2 == 0 ? "even" : "odd") <<
                    '\n';
            }
        },
        {
            '*',
            [](const int a, const int b)
            {
                std::cout << a << " * " << b << " = " << a * b << " - " << ((a * b) % 2 == 0 ? "even" : "odd") <<
                    '\n';
            }
        },
        {
            '/', [](const int a, const int b)
            {
                if (b == 0)
                    std::cout << "Cannot divide " << a << " by zero" << '\n';
                else
                    std::cout << a << " / " << b << " = " << std::fixed << std::setprecision(2) << static_cast<double>(
                            a) / b <<
                        '\n';
            }
        },
        {
            '%', [](int a, int b)
            {
                if (b == 0)
                    std::cout << "Cannot divide " << a << " by zero" << '\n';
                else
                    std::cout << a << " % " << b << " = " << a % b << '\n';
            }
        }
    };

    operations[op](n1, n2);

    return 0;
}
