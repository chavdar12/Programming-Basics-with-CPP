#include <iostream>
#include <cmath>
#include <string>

int main()
{
    std::string serial_name;
    int episode_duration, break_duration;
    std::cin >> serial_name >> episode_duration >> break_duration;

    const double free_time = break_duration - (break_duration * 1.0 / 8) - (break_duration * 1.0 / 4);

    std::cout << "You " << (free_time >= episode_duration
                                ? "have enough time to watch "
                                : "don't have enough time to watch ")
        << serial_name << ", you " << (free_time >= episode_duration ? "left with " : "need ")
        << std::round(std::abs(free_time - episode_duration)) << (free_time >= episode_duration
                                                                      ? " minutes free time."
                                                                      : " more minutes.") << '\n';

    return 0;
}
