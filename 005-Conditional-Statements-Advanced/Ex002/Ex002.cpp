#include <iostream>
#include <unordered_map>

int main()
{
    std::string day;
    std::cin >> day;

    std::unordered_map<std::string, std::string> day_type = {
        {"Monday", "Working day"},
        {"Tuesday", "Working day"},
        {"Wednesday", "Working day"},
        {"Thursday", "Working day"},
        {"Friday", "Working day"},
        {"Saturday", "Weekend"},
        {"Sunday", "Weekend"}
    };

    std::cout << (day_type.count(day) ? day_type[day] : "Error") << '\n';

    return 0;
}
