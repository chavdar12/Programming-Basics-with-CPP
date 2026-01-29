#include <iostream>
#include <string>

int main()
{
    std::string text;
    getline(std::cin, text);

    for (const char ch : text)
    {
        std::cout << ch << '\n';
    }

    return 0;
}
