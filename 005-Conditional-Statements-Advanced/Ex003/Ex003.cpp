#include <iostream>
#include <unordered_map>

int main()
{
    std::string name;
    std::cin >> name;

    std::unordered_map<std::string, std::string> animal_class = {
        {"dog", "mammal"},
        {"crocodile", "reptile"},
        {"tortoise", "reptile"},
        {"snake", "reptile"}
    };

    std::cout << "The class of the animal is: " << (animal_class.count(name) ? animal_class[name] : "unknown") <<
        std::endl;

    return 0;
}
