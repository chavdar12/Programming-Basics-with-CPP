#include <iostream>
#include <string>
#include <map>

std::string get_title(const double age, const char gender)
{
    std::map<char, std::map<bool, std::string>> title_map = {
        {'m', {{true, "Mr."}, {false, "Master"}}},
        {'f', {{true, "Ms."}, {false, "Miss"}}}
    };

    return title_map[gender][age >= 16];
}

int main()
{
    double age;
    char gender;

    std::cin >> age >> gender;

    const std::string title = get_title(age, gender);
    std::cout << "Title: " << title << '\n';

    return 0;
}
