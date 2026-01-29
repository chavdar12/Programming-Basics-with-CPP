#include <iostream>
#include <string>

int main()
{
    std::string input;

    while (true)
    {
        std::cin >> input;

        if (input == "Stop")
        {
            break;
        }

        std::cout << input << '\n';
    }

    return 0;
}
