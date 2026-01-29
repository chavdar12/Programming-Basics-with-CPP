#include <iostream>
#include <string>

int main()
{
    int width, length;
    std::cin >> width >> length;

    int cake_size = width * length;
    std::string command;

    while (std::cin >> command && cake_size > 0)
    {
        if (command == "STOP")
        {
            std::cout << cake_size << " pieces are left.\n";
            break;
        }

        const int pieces = std::stoi(command);
        cake_size -= pieces;

        if (cake_size <= 0)
        {
            std::cout << "No more cake left! You need " << -cake_size << " pieces more.\n";
        }
    }

    return 0;
}
