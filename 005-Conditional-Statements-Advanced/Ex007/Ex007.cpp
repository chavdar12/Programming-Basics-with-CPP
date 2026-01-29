#include <iostream>
#include <unordered_set>

int main()
{
    int hour;
    std::string day;

    std::cin >> hour >> day;

    const std::unordered_set<std::string> working_days = {
        "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
    };

    std::cout << ((hour >= 10 && hour <= 18 && working_days.count(day)) ? "open" : "closed") << '\n';

    return 0;
}
