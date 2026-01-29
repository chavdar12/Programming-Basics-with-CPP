#include <iostream>
#include <string>

int main()
{
    std::string username, password, input;

    std::cin >> username >> password;

    std::cin >> input;

    while (input != password)
    {
        std::cout << "Incorrect password! Try again: ";
        std::cin >> input;
    }

    std::cout << "Welcome " << username << "!" << '\n';

    return 0;
}
