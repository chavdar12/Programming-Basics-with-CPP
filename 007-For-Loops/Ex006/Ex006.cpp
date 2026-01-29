#include <iostream>
#include <string>

int main()
{
    std::string word;
    getline(std::cin, word);

    int sum = 0;
    for (const char ch : word)
    {
        switch (ch)
        {
        case 'a':
            sum += 1;
            break;
        case 'e':
            sum += 2;
            break;
        case 'i':
            sum += 3;
            break;
        case 'o':
            sum += 4;
            break;
        case 'u':
            sum += 5;
            break;
        default:
            break;
        }
    }

    std::cout << sum << '\n';

    return 0;
}
