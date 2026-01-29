#include <iostream>
#include <string>

int main()
{
    constexpr int goal = 10000;
    int steps = 0;
    std::string input;

    while (steps < goal)
    {
        std::cin >> input;
        if (input == "Going home")
        {
            int steps_on_the_way_home;
            std::cin >> steps_on_the_way_home;
            steps += steps_on_the_way_home;
            if (steps < goal)
            {
                std::cout << goal - steps << " more steps to reach goal." << '\n';
                break;
            }
        }
        else
        {
            const int current_steps = std::stoi(input);
            steps += current_steps;
        }
    }

    if (steps >= goal)
    {
        const int difference = steps - goal;
        std::cout << "Goal reached! Good job!" << '\n';
        if (difference > 0)
        {
            std::cout << difference << " steps over the goal!" << '\n';
        }
    }

    return 0;
}
