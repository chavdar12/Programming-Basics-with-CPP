#include <iostream>
#include <string>
#include <map>

int main()
{
    int num_tabs, salary;
    std::cin >> num_tabs >> salary;

    std::map<std::string, int> fines = {{"Facebook", 150}, {"Instagram", 100}, {"Reddit", 50}};

    for (int i = 0; i < num_tabs; ++i)
    {
        std::string website;
        std::cin >> website;

        if (fines.count(website))
        {
            salary -= fines[website];
        }
    }

    if (salary <= 0)
    {
        std::cout << "You have lost your salary." << '\n';
    }
    else
    {
        std::cout << salary << '\n';
    }

    return 0;
}
