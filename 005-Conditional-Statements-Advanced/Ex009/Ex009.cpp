#include <iostream>
#include <unordered_set>

int main()
{
    std::string product;
    std::cin >> product;

    const std::unordered_set<std::string> fruits = {"banana", "apple", "kiwi", "cherry", "lemon", "grapes"};
    const std::unordered_set<std::string> vegetables = {"tomato", "cucumber", "pepper", "carrot"};

    if (fruits.count(product))
    {
        std::cout << "fruit" << '\n';
    }
    else if (vegetables.count(product))
    {
        std::cout << "vegetable" << '\n';
    }
    else
    {
        std::cout << "unknown" << '\n';
    }

    return 0;
}
